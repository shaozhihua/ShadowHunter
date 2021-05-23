#ifndef CENTRALAREA_H
#define CENTRALAREA_H

#include <QGraphicsObject>

class CentralArea : public QGraphicsObject
{
    Q_OBJECT
public:
    CentralArea();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:

public slots:
private:
    int m_width;
    int m_height;
};

#endif // CENTRALAREA_H
