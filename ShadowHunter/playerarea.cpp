#include "playerarea.h"
#include <QPainter>

static QRectF PlayerAreaRect(0, 0, 1152, 700);
static const QPointF PlayerPos5[]={QPointF(2,500),QPointF(2,265),QPointF(2,45),QPointF(990,45),QPointF(990,265)};
PlayerArea::PlayerArea()
{
    setPos(0,0);
}

void PlayerArea::Init()
{
    for(int i = 0;i < 5;i++)
    {
        playerItems<<new PlayerItem();
        playerItems[i]->setParentItem(this);
        playerItems[i]->setPos(PlayerPos5[i]);
    }
}

QRectF PlayerArea::boundingRect() const
{
    return PlayerAreaRect;
}

void PlayerArea::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(PlayerAreaRect);
}
