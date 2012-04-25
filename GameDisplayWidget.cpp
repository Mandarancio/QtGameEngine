#include "GameDisplayWidget.h"
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


}

}

