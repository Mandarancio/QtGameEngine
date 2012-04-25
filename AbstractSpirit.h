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
    void setCoordinate(Vector3D coordinate);





private:
    Vector3D coordinate;

};

}

#endif // ABSTRACTSPIRIT_H
