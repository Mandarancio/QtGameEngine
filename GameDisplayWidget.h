#ifndef GAME_DISPLAY_WIDGET_H
#define GAME_DISPLAY_WIDGET_H
#include <QGLWidget>
#include "AbstractRenderer.h"

namespace QtGameEngine {
namespace UI {
using namespace RenderingEngine;

class GameDisplayWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GameDisplayWidget(QWidget *parent = 0);

signals:

public slots:
    void setRenderer(AbstractRenderer* renderer);
protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

private:
    AbstractRenderer* renderer;




};



}

}

#endif // GAMEDISPLAYWIDGET_H
