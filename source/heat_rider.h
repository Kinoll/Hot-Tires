#ifndef HEAT_RIDER_H
#define HEAT_RIDER_H
#include <QList>
#include <QVector>
#include <QString>
#include <QStringList>
#include <time.h>
#include "triangle.h"
#include "htmath.h"
#include "track.h"

class heat_rider
{
public:
    heat_rider(track & trk);
    heat_rider ();
    csv CSV;
    vec2d position, velocity, target, desired_velocity, steering, norm_vel;
    bool was_on_left, finished_race, counted, was_ahead, was_slowed;
    int place, lap, id, path_index, start_pos, moves;
    float mass, torque_max, grip, steering_base, steering_max,
    speed_max, X, rand_x, angle, speed_base, bonus, speed_last;
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

#endif // HEAT_RIDER_H

