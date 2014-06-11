#include "vec2d.h"

vec2d vec2d::operator +(const vec2d& v1)
{
    return vec2d(x + v1.x, y + v1.y);
}
vec2d vec2d::operator +(const float& n)
{
    return vec2d(x + n, y + n);
}
vec2d vec2d::operator -(const vec2d& v1)
{
    return vec2d(x - v1.x, y - v1.y);
}
vec2d vec2d::operator -(const float& n)
{
    return vec2d(x - n, y - n);
}
vec2d vec2d::operator *(const vec2d& v1)
{
    return vec2d(x * v1.x, y * v1.y);
}
vec2d vec2d::operator *(const float& n)
{
    return vec2d(x * n, y * n);
}
vec2d vec2d::operator /(const vec2d& v1)
{
    vec2d v2;
    if (v1.x == 0)
        v2.x = 0;
    else
        v2.x = x / v1.x;
    if (v1.y == 0)
        v2.y = 0;
    else
        v2.y = y / v1.y;
    return v2;
}
vec2d vec2d::operator /(const float& n)
{
    vec2d v2;
    if (n == 0)
    {
        v2.x = 0;
        v2.y = 0;
    }
    else
    {
        v2.x = x / n;
        v2.y = y / n;
    }
    return v2;
}
vec2d vec2d::normalized()
{
    float d = sqrt(x*x + y*y);
    vec2d v(x/d, y/d);
    return v;
}
void vec2d::rotate(float angle)
{
    float old_x, old_y;
    float pi = 3.14159;
    angle = (angle * pi)/180.0;
    old_x = x;
    old_y = y;
    x = old_x * cos(angle) - old_y * sin(angle);
    y = old_x * sin(angle) + old_y * cos(angle);
}
void vec2d::fromQVector(QVector<float> qvec)
{
    x = qvec[0];
    y = qvec[1];
}
QVector<float> vec2d::toQVector()
{
    QVector<float> vec(2);
    vec[0] = x;
    vec[1] = y;
    return vec;
}

