#include "Game.h"
namespace QtGameEngine
{

Game::Game(int& argc, char *argv[])
    :QApplication(argc,argv)
{
    display = new GameDisplayWidget;
    display->setInputMapper(&mapper);
    connect(this,SIGNAL(frame()),display,SLOT(updateGL()));
}

Game::~Game()
{
    killTimer(timerID);
    delete display;
}

void Game::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == timerID)
    {
        e->accept();
        emit frame();
    }
}
int Game::start()
{
    display->show();
    timerID = startTimer(34);
    return exec();
}


}
