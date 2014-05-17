#ifndef HTMATH_H
#define HTMATH_H
#include "vec2d.h"

class htmath
{
public:
    htmath();
    float det(vec2d v1, vec2d v2, vec2d v3)
    {
        return v1.x*v2.y + v2.x*v3.y + v3.x*v1.y - v1.x*v3.y - v2.x*v1.y - v3.x*v2.y;
    }

    float trun(float a, float max)
    /*Obciecie float do wartosci maksymalnej*/
    {
        if(a>max)
        {
            a = max;
        }
        return a;
    }

    float dist(vec2d v1, vec2d v2)
    //squared
    {
        return (v1.x-v2.x)*(v1.x-v2.x) + (v1.y-v2.y)*(v1.y-v2.y);
    }
};
#endif // HTMATH_H
