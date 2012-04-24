#include "Vector3D.h"

namespace QtGameEngine
{
namespace Math
{

Vector3D::Vector3D(double x, double y, double z)
{
    setX(x);
    setY(y);
    setZ(z);
}

Vector3D operator +(Vector3D& a, Vector3D& b)
{
    return Vector3D(a.getX()+b.getX(), a.getY()+b.getY(), a.getZ()+b.getZ());
}

Vector3D operator -(Vector3D& a, Vector3D& b)
{
    return Vector3D(a.getX()-b.getX(), a.getY()-b.getY(), a.getZ()-b.getZ());
}

double Vector3D::getX()
{
    return x;
}
double Vector3D::getY()
{
    return y;
}
double Vector3D::getZ()
{
    return z;
}

void Vector3D::setX(double x)
{
    this->x = x;
}

void Vector3D::setY(double y)
{
    this->y = y;
}

void Vector3D::setZ(double z)
{
    this->z = z;
}




}

}
