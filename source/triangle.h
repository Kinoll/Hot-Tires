#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "vec2d.h"
#include <QVector>

class triangle
{
public:
    QVector<vec2d> points;
    triangle(){}
    triangle(vec2d u1, vec2d u2, vec2d u3) {points.resize(3); points[0] = u1; points[1] = u2; points[2] = u3;}
    void rotate(float angle);
    void move(vec2d norm_vec, float value);
};

#endif // TRIANGLE_H
