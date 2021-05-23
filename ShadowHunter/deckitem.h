#ifndef DECKITEM_H
#define DECKITEM_H

#include <QGraphicsObject>

class DeckItem : public QGraphicsObject
{
    Q_OBJECT
public:
    DeckItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
signals:

public slots:
private:
    int m_width;
    int m_height;
};

#endif // DECKITEM_H
