#ifndef GAME_H
#define GAME_H
#include "GameDisplayWidget.h"

namespace QtGameEngine
{
using namespace UI;
class Game
{
public:
    Game();
    ~Game();
private:
    GameDisplayWidget* display;

};

}


#endif // GAME_H
