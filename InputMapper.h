#ifndef INPUTMAPPER_H
#define INPUTMAPPER_H


#include <Qt>
#include "AbstractInputHandler.h"
namespace QtGameEngine {

namespace InputEngine {

class InputMapper
{
public:
    void addKeyboardHandler(int key,AbstractInputHandler* handler);
    void addMouseHandler(Qt::MouseButton mouseButton,AbstractInputHandler* handler);

    AbstractInputHandler* getInputHandler(Qt::MouseButton mouseButton);
    AbstractInputHandler* getInputHandler(int key);



};


}



}
#endif // INPUTMAPPER_H
