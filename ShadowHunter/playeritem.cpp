#include "playeritem.h"
#include <QPainter>

PlayerItem::PlayerItem()
{
    this->m_width = 164;
    this->m_height = 180;
}

QRectF PlayerItem::boundingRect() const
{
   return QRectF(0, 0, m_width, m_height);
}

void PlayerItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(0,0,m_width, m_height);
    painter->drawText(QPoint(m_width*0.3,m_height*0.5),"玩家头像");
}
