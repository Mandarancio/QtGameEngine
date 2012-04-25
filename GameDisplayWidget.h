#ifndef GAME_DISPLAY_WIDGET_H
#define GAME_DISPLAY_WIDGET_H
#include <QGLWidget>
#include "AbstractRenderer.h"
#include "InputMapper.h"
namespace QtGameEngine {
using namespace RenderingEngine;
using namespace InputEngine;
namespace UI {
class GameDisplayWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GameDisplayWidget(QWidget *parent = 0);

signals:

public slots:
    void setRenderer(AbstractRenderer* renderer);
    void setInputMapper(InputMapper* mapper);
protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

    virtual void mousePressEvent(QMouseEvent *e);
    virtual void keyPressEvent(QKeyEvent *e);

private:
    AbstractRenderer* renderer;

    InputMapper* mapper;


};



}

}

#endif // GAMEDISPLAYWIDGET_H
