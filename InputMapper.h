#ifndef INPUTMAPPER_H
#define INPUTMAPPER_H


#include <Qt>
#include "AbstractInputHandler.h"
namespace QtGameEngine {

namespace InputEngine {

class InputMapper
{
public:
    InputMapper();
    void addKeyboardHandler(int key,AbstractInputHandler handler);
    void addMouseHandler(Qt::MouseButton mouseButton,AbstractInputHandler handler);

    InputHandler getInputHandler(Qt::MouseButton mouseButton);
    InputHandler getInputHandler(int key);



};


}



}
#endif // INPUTMAPPER_H
