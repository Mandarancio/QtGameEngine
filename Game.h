#ifndef GAME_H
#define GAME_H
#include "GameDisplayWidget.h"
#include <QApplication>
namespace QtGameEngine
{
using namespace UI;
class Game : public QApplication
{
    Q_OBJECT
public:
    Game(int argc,char* argv[]);
    ~Game();
    int start();
signals:
    void initialize();
    void frame();

protected:
    virtual void timerEvent(QTimerEvent *e);
private:
    GameDisplayWidget* display;
    int timerID;
};

}


#endif // GAME_H
