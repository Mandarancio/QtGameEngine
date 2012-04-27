#include "GameDisplayWidget.h"
#include <QtEvents>

namespace QtGameEngine {
namespace UI {
GameDisplayWidget::GameDisplayWidget(QWidget *parent) :
    QGLWidget(parent)
{
    setRenderer(0);
    setInputMapper(0);
}


void GameDisplayWidget::paintGL()
{
    if(renderer)
        renderer->render();
}
void GameDisplayWidget::initializeGL()
{
    if(renderer)
        renderer->initialize();
}

void GameDisplayWidget::resizeGL(int w, int h)
{
    if(renderer)
        renderer->resize(w, h);
}

void GameDisplayWidget::setRenderer(AbstractRenderer *renderer)
{
    this->renderer = renderer;
}

void GameDisplayWidget::keyPressEvent(QKeyEvent *e)
{
    e->accept();

    AbstractInputHandler* handler = mapper->getInputHandler(e->key());
    if(handler)
        handler->handleInput();

}
void GameDisplayWidget::mousePressEvent(QMouseEvent *e)
{
    e->accept();
    AbstractInputHandler* handler = mapper->getInputHandler(e->button());
    if(handler)
        handler->handleInput();
}

void GameDisplayWidget::setInputMapper(InputMapper *mapper)
{
}
}

}

