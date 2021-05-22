#ifndef CARDITEM_H
#define CARDITEM_H

#include <QGraphicsObject>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QPen>

class CardItem : public QGraphicsObject
{
    Q_OBJECT
public:
    explicit CardItem();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);



    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event) override;






signals:
    void cardSelected();
    void cardUnSelected();
    void xuanzhongle();

public slots:

private:
    bool isSelected;
    QPen cardPen;
    int m_y_pos;
    int m_width;
    int m_height;
};

#endif // CARDITEM_H
