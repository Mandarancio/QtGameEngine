#ifndef ABSTRACT_SPIRIT_H
#define ABSTRACT_SPIRIT_H
#include "Vector3D.h"
namespace QtGameEngine
{
using namespace Math;
class AbstractSpirit
{
public:
    Vector3D getCoordinate();
    void setCoordinate(Vector3D& coordinate);
    Vector3D getDirection();
    void setDirection(Vector3D& direction);




private:
    Vector3D coordinate;
    Vector3D direction;
};

}

#endif // ABSTRACTSPIRIT_H
