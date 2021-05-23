#include "centralarea.h"
#include <QPen>
#include <QPainter>

CentralArea::CentralArea()
{
    this->m_width = 760;
    this->m_height = 400;

    setPos(200,60);
}

QRectF CentralArea::boundingRect() const
{
    return QRectF(0,0,m_width,m_height);
}

void CentralArea::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::DashLine);
    painter->setPen(pen);
    painter->drawRect(0,0,m_width,m_height);
}
