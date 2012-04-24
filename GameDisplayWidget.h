#ifndef GAMEDISPLAYWIDGET_H
#define GAMEDISPLAYWIDGET_H

namespace QtGameEngine {
namespace UI {
#include <QGLWidget>

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
