#include "deckarea.h"
#include <QPainter>

DeckArea::DeckArea()
{
    this->m_width = 600;
    this->m_height = 60;

    setPos(QPointF(280,0));

    m_greenCardDeck = new DeckItem();
    m_greenCardDeck->setParentItem(this);
    m_greenCardDeck->setPos(QPointF(53,0));

    m_whiteCardDeck = new DeckItem();
    m_whiteCardDeck->setParentItem(this);
    m_whiteCardDeck->setPos(QPointF(235,0));

    m_blackCardDeck = new DeckItem();
    m_blackCardDeck->setParentItem(this);
    m_blackCardDeck->setPos(QPointF(417,0));

}

QRectF DeckArea::boundingRect() const
{
    return QRectF(0,0,m_width,m_height);
}

void DeckArea::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //painter->drawRect(0,0,m_width,m_height);
}
