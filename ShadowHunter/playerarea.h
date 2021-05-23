#ifndef PLAYERAREA_H
#define PLAYERAREA_H

#include <QObject>
#include <QGraphicsObject>
#include <QList>
#include "playeritem.h"


class PlayerArea : public QGraphicsObject
{
    Q_OBJECT
public:
    PlayerArea();
    void Init();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:

public slots:

private:
    QList<PlayerItem*> playerItems;
};

#endif // PLAYERAREA_H
