#include "Button.h"
#include <QPainter>


Button::Button(int id,QString msg)
{
    //background=QPixmap("resource/button1.png");
    //height=background.height();
    //width=background.width();
    height = 30;
    width = 80;
    selected = 0;
    this->id = id;
    this->msg = msg;
    setEnabled(1);
    setOpacity(0.8);
}
QRectF Button::boundingRect() const
{
    return QRectF(0, 0, width, height);
}
void Button::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawText(QPointF(0.24*width,0.6*height),msg);
    if(selected)
    {
        buttonPen.setColor(QColor(255,0,255));
        painter->setPen(buttonPen);
    }
    painter->drawRect(0, 0, width, height);

//    if(isEnabled())
//        painter->drawPixmap(0, 0, QPixmap("resource/Button6.png"));
//    else
//        painter->drawPixmap(0, 0, QPixmap("resource/Button1.png"));

//    QFont font;
//    font.setBold(1);
//    painter->setFont(font);
//    painter->drawText(QRectF(0, 0, width, height),Qt::AlignCenter,msg);
//    painter->drawPixmap(0,0,QPixmap("resource/buttonSelected.png"));


}
void Button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(!this->selected)
    {
        selected = 1;
        update();
        //emit buttonSelected(id);
    }
    else
    {
        selected = 0;
        update();
        //emit buttonUnselected(id);
    }
}
