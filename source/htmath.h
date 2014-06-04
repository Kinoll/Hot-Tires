#ifndef HTMATH_H
#define HTMATH_H
#include "vec2d.h"

class htmath
{
public:
    htmath();
    float det(vec2d v1,vec2d v2, vec2d v3)
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
    vec2d trun(vec2d v1, float max)
    {
        if (v1.x > max)
            v1.x = max;
        if (v1.y > max)
            v1.y = max;
        return v1;
    }

    float dist(vec2d v1, vec2d v2)
    //squared
    {
        return (v1.x-v2.x)*(v1.x-v2.x) + (v1.y-v2.y)*(v1.y-v2.y);
    }
    float min(float a, float b)
    {
        if (a < b)
            return a;
        return b;
    }
};
extern htmath ht_math;
#endif // HTMATH_H
