#include "deckarea.h"
#include <QPainter>

DeckArea::DeckArea()
{
    this->m_width = 600;
    this->m_height = 60;

    setPos(QPointF(280,0));
}

QRectF DeckArea::boundingRect() const
{
    return QRectF(0,0,m_width,m_height);
}

void DeckArea::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRect(0,0,m_width,m_height);
}
