#include "handarea.h"
#include <QDebug>
#include <QPainter>

static QRectF HandAreaRect(170, 490, 860, 190);

HandArea::HandArea()
{
    setAcceptHoverEvents(true);
    //this->addCardItem(1);
}

QRectF HandArea::boundingRect() const
{
    return HandAreaRect;
}

void HandArea::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(170,490,860, 190);
}

void HandArea::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    //setY(y()-20);
    //qDebug()<<"Enter hand area";
}

void HandArea::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    //setY(y()+20);
    //qDebug()<<"Leave hand area";
}

void HandArea::addCardItem(int cardId)
{
    CardItem* cardItem=new CardItem();
    cardItem->setParentItem(this);

    cardItems << cardItem;
    adjustCards();
}

void HandArea::adjustCards()
{
    if(cardItems.isEmpty())
        return;
    int n = cardItems.size();
    int card_skip;
    if(n > 6)
        card_skip = 600/(n-1);
    else
        card_skip = 120;

    int i;
    for(i=0; i<n; i++)
    {
        cardItems[i]->setZValue(0.1 * i);
        cardItems[i]->setPos(QPointF(200+i*card_skip, 528));
    }
}









