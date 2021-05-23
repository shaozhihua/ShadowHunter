#include "deckitem.h"
#include <QPainter>

DeckItem::DeckItem()
{
    this->m_width = 130;
    this->m_height = 40;
}

QRectF DeckItem::boundingRect() const
{
    return QRectF(0,0,m_width,m_height);
}

void DeckItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(0,0,m_width,m_height);
}
