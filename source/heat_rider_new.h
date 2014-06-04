#ifndef HEAT_RIDER_NEW_H
#define HEAT_RIDER_NEW_H
#include <QList>
#include <QVector>
#include <QString>
#include <QStringList>
#include "vec2d.h"
#include <time.h>
#include "triangle.h"
#include "htmath.h"
#include "track.h"

class heat_rider_new
{
public:
    heat_rider_new();
    csv CSV;
    vec2d position, velocity, target, desired_velocity, steering;
    bool was_on_left, finished_race, counted;
    int place, lap, id, path_index, start_pos, moves;
    float mass, torque_max, grip, steering_base, steering_max,
    speed_max, X, rand_x, angle, speed_base;
    QString helmet_colour;
    QList<vec2d> path;
    QVector< QVector <float> > movement_record;
    triangle tri;
    void get_speed();
    void clear();
    void findPath(track &trk);
    void findPathFull(track &trk);
    void move(track &trk);
    void getPath(track &trk);
};

#endif // HEAT_RIDER_NEW_H
