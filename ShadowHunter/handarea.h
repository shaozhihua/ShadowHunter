#ifndef HANDAREA_H
#define HANDAREA_H

#include <QGraphicsObject>
#include <QList>
#include "carditem.h"
#include <QMouseEvent>

class HandArea : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit HandArea();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;


    void addCardItem(int cardId);
    void adjustCards();

private:

signals:

public slots:

private:
    QList<CardItem*> cardItems;

};

#endif // HANDAREA_H
