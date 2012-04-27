#ifndef ABSTRACT_SCENE_H
#define ABSTRACT_SCENE_H
#include "Vector3D.h"


namespace QtGameEngine
{
using namespace Math;
class AbstractScene
{
public:
    void setCoordinate(Vector3D& coordinate);
    Vector3D getCoordinate();
};
}
#endif // ABSTRACTSCENE_H
