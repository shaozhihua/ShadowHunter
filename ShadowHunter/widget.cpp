#include <QGraphicsScene>
#include "widget.h"
#include "ui_widget.h"
#include "carditem.h"
#include <QGraphicsView>
#include <QCursor>
#include <QPixmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QGraphicsScene *handScene = new QGraphicsScene(this);
//    handScene->setSceneRect(0,0,ui->handView->width()-2,ui->handView->height()-2);
//    CardItem *card1 = new CardItem();
//    CardItem *card2 = new CardItem();
//    CardItem *card3 = new CardItem();
//    CardItem *card4 = new CardItem();
//    CardItem *card5 = new CardItem();
//    CardItem *card6 = new CardItem();
//    handScene->addItem(card1);
//    handScene->addItem(card2);
//    handScene->addItem(card3);
//    handScene->addItem(card4);
//    handScene->addItem(card5);
//    handScene->addItem(card6);
//    card1->setPos(100,65);
//    card2->setPos(220,65);
//    card3->setPos(340,65);
//    card4->setPos(460,65);
//    card5->setPos(580,65);
//    card6->setPos(700,65);
//    ui->handView->setScene(handScene);

//    RoomView *roomview = new RoomView();
//    roomview->setGeometry(this->geometry());
//    roomview->show();








}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    this->hide();
    RoomView *roomview = new RoomView();
    roomview->setGeometry(this->geometry());
    roomview->show();
}

void Widget::on_pushButton_3_clicked()
{
    this->close();
}

void Widget::enterEvent(QEvent *event)
{
    //QCursor my(QPixmap(":/card/imgs/mouseCursor.png"));
    //QApplication::setOverrideCursor(my);
}

