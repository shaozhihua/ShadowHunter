#ifndef DECISIONAREA_H
#define DECISIONAREA_H

#include <QObject>
#include <QGraphicsObject>
#include "Button.h"

class DecisionArea : public QGraphicsObject
{
    Q_OBJECT
public:
    DecisionArea();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:

public slots:

private:
    Button* okButton;
    Button* cancelButton;
};

#endif // DECISIONAREA_H
