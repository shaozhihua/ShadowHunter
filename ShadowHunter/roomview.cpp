#include "roomview.h"
#include <QGraphicsScene>
#include "handarea.h"
#include "decisionarea.h"
#include "playeritem.h"
#include "playerarea.h"
#include "deckarea.h"
#include "centralarea.h"
#define gWidth 1280*0.9
#define gHeight 800*0.85
RoomView::RoomView()
{
    setFixedSize(QSize(gWidth+5, gHeight+5));
    move(QPoint(100,0));
    setCacheMode(CacheBackground);
    setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    setWindowTitle("暗影猎人");

    //创建房间场景
    QGraphicsScene *roomScene = new QGraphicsScene(this);
    //设置房间场景大小
    roomScene->setSceneRect(0,0,gWidth,gHeight);
    //创建手牌区域
    HandArea *handarea = new HandArea();
    handarea->addCardItem(1);
    handarea->addCardItem(2);
    handarea->addCardItem(3);
    handarea->addCardItem(4);
    handarea->addCardItem(5);
    //创建决定按钮区域
    DecisionArea *decisionarea = new DecisionArea();
    //创建玩家区域
    PlayerArea *playerArea = new PlayerArea;
    playerArea->Init();
    //创建牌库区域
    DeckArea *deckArea = new DeckArea();
    //创建游戏中心区域
    CentralArea *centralArea = new CentralArea();



    //将各个区域添加到房间场景
    roomScene->addItem(handarea);
    roomScene->addItem(decisionarea);
    roomScene->addItem(playerArea);
    roomScene->addItem(deckArea);
    roomScene->addItem(centralArea);

    //将房间场景设置到房间视图
    setScene(roomScene);
}

void RoomView::closeEvent(QCloseEvent * event)
{
    QGraphicsView::closeEvent(event);
    emit closed();
}
