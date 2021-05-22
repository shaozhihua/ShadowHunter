#include "decisionarea.h"

DecisionArea::DecisionArea()
{
    setPos(QPoint(1050,490));
    okButton = new Button(0,QString("确   定"));
    okButton->setParentItem(this);
    okButton->setPos(0,0);
    cancelButton = new Button(1,tr("取   消"));
    cancelButton->setParentItem(this);
    cancelButton->setPos(0,50);
}

QRectF DecisionArea::boundingRect() const
{
    return QRectF(0, 0, 160, 50);
}

void DecisionArea::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

}
