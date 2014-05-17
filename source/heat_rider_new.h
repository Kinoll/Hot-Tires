#ifndef HEAT_RIDER_NEW_H
#define HEAT_RIDER_NEW_H
#include <QList>
#include <QVector>
#include <QString>
#include <QStringList>
#include "vec2d.h"
#include <time.h>
#include "database.h"
#include "triangle.h"
#include "htmath.h"

class heat_rider_new
{
public:
    heat_rider_new();
    vec2d position, velocity, target, desired_velocity, steering;
    bool was_on_left, finished_race, counted;
    int place, lap, id, path_index, start_pos;
    float mass, torque_max, grip, steering_base, steering_max,
    speed_base, X, rand_x, angle;
    QList<vec2d> path;
    triangle tri;
    void get_speed();
    void clear();
    void findPath();
    void findPathFull();

};

#endif // HEAT_RIDER_NEW_H
