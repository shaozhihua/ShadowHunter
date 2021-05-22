#include "carditem.h"
#include <QDebug>
#include <QPainter>
#include <QToolTip>


CardItem::CardItem()
{
    isSelected = false;
    this->m_width = 100;
    this->m_height = 150;
    setFlag(GraphicsItemFlag::ItemIsMovable,false);
    setAcceptHoverEvents(true);
    /*
    setToolTip("这是这张牌的提示信息，我不知道这个气泡\n提示\
     信息的文字大小怎么设置，以及显示事件长短\n\
     等等，怎么设置呢？");
    */
    //const QPoint p(100,100);
    //QToolTip::showText(p,"hahahaha",nullptr,QRect(0,0,200,200),1000);
    connect(this,&CardItem::cardSelected,[=](){

        cardPen.setColor(QColor(255,0,255));
        update();
    });
    connect(this,&CardItem::cardUnSelected,[=](){
        cardPen.setColor(QColor(0,0,0));
        update();
    });

    connect(this,&CardItem::cardSelected,[=](){
       emit xuanzhongle();
    });

    //load pixmap
    //pix.load();


}

QRectF CardItem::boundingRect() const
{
    return QRectF(0,0,100,150);
}

void CardItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(cardPen);
    painter->drawRect(0,0,m_width, m_height);

    //draw pixmap
    //painter->drawText(QPoint(15,80+m_y_pos),"Green Card");
    //painter->drawPixmap(QPoint(0,m_y_pos),pix);

}

void CardItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    //进入卡牌Item时鼠标左键是否时按下状态，如果是，变成选中
    if(!isSelected)
    {
        setY(y() - 20);
    }

}

void CardItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    //setY(y() + 20);
    if(!isSelected)
    {
        setY(y() + 20);
        isSelected = false;
        emit cardUnSelected();
    }

}

void CardItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(this->isSelected == true)
    {
        isSelected = false;
        emit cardUnSelected();
        //setY(y() + 20);
    }
    else
    {
        isSelected = true;
        emit cardSelected();
        //setY(y() - 20);
    }

}


