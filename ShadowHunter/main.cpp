//#pragma execution_character_set("utf-8")
#include "widget.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();
    RoomView *roomview = new RoomView();
    //roomview->setGeometry(this->geometry());
    roomview->show();
    return a.exec();
}
