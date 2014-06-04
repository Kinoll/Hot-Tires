#ifndef VEC2D_H
#define VEC2D_H
#include <cmath>
#include <QVector>


class vec2d
{
private:
public:
    float x,y;
    vec2d(float x1 = 0, float y1 = 0){x = x1; y = y1;}
    void fromQVector(QVector<float> qvec);
    QVector<float> toQVector();
    vec2d operator +(const vec2d &v1);
    vec2d operator +(const float& n);
    vec2d operator -(const vec2d& v1);
    vec2d operator -(const float& n);
    vec2d operator *(const vec2d& v1);
    vec2d operator *(const float& n);
    vec2d operator /(const vec2d& v1);
    vec2d operator /(const float& n);
    vec2d normalized();
    void rotate(float angle);
};

#endif // VEC2D_H
