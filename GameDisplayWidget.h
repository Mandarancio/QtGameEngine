#ifndef GAMEDISPLAYWIDGET_H
#define GAMEDISPLAYWIDGET_H
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

};



}

}

#endif // GAMEDISPLAYWIDGET_H
