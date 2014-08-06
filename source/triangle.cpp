#include "triangle.h"

void triangle::rotate(float angle)
{
    for (int i = 0; i < points.size(); i++)
    {
        points[i].rotate(angle);
    }
}
void triangle::move(vec2d norm_vec, float value)
{
    for (int i = 0; i < points.size(); i++)
    {
        points[i] = points[i] + norm_vec * value;
    }
}
