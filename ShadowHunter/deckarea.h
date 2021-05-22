#ifndef DECKAREA_H
#define DECKAREA_H

#include <QGraphicsObject>

class DeckArea : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit DeckArea();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:

public slots:

private:
    int m_width;
    int m_height;

};

#endif // DECKAREA_H
