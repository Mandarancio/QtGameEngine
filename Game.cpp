#include "Game.h"
namespace QtGameEngine
{

Game::Game(int argc, char *argv[])
    :QApplication(argc,argv)
{
    display = new GameDisplayWidget;
    timerID = startTimer(34);
    connect(this,SIGNAL(frame()),display,SLOT(updateGL()));
}

Game::~Game()
{
    killTimer(timerID);
}

void Game::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == timerID)
    {
        e->accept();
        emit frame();
    }
}


}
