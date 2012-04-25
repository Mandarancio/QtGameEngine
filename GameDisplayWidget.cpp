#include "GameDisplayWidget.h"
#include <QtEvents>

namespace QtGameEngine {
namespace UI {
GameDisplayWidget::GameDisplayWidget(QWidget *parent) :
    QGLWidget(parent)
{

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
    mapper->getInputHandler(e->key());
}
void GameDisplayWidget::mousePressEvent(QMouseEvent *e)
{
    e->accept();
    mapper->getInputHandler(e->button());
}


}

}

