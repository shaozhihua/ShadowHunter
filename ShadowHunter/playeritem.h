#ifndef PLAYERITEM_H
#define PLAYERITEM_H

#include <QObject>
#include <QGraphicsObject>

class PlayerItem : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit PlayerItem();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:

public slots:

private:
    int m_width;
    int m_height;
};

#endif // PLAYERITEM_H
