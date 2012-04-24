#ifndef VECTOR3D_H
#define VECTOR3D_H
namespace QtGameEngine
{
namespace Math
{
class Vector3D
{
public:

public:
    Vector3D(double x,double y,double z);
    double getX();
    double getY();
    double getZ();
    void setX(double x);
    void setY(double y);
    void setZ(double z);

private:
    double x;
    double y;
    double z;


};
Vector3D operator + (Vector3D& a,Vector3D& b);
Vector3D operator - (Vector3D& a,Vector3D& b);




}

}
#endif // VECTOR3D_H
