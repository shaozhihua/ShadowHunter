#ifndef ROOMVIEW_H
#define ROOMVIEW_H

#include <QGraphicsView>

class RoomView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit RoomView();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent * event);

public slots:
};

#endif // ROOMVIEW_H
