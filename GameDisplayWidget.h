#ifndef GAME_DISPLAY_WIDGET_H
#define GAME_DISPLAY_WIDGET_H
#include <QGLWidget>

namespace QtGameEngine {
namespace UI {

class GameDisplayWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GameDisplayWidget(QWidget *parent = 0);

signals:

public slots:
protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();


};



}

}

#endif // GAMEDISPLAYWIDGET_H
