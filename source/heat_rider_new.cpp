#include "heat_rider_new.h"


heat_rider_new::heat_rider_new()
{
    path_index = 0;
    steering_base = 1.3;
    steering_max = 1.3;
    mass = 27;
    speed_base = 3.2;
    torque_max = 3.2;
    place = 0;
    lap = 1;
    was_on_left = false;
    finished_race = false;
    counted = false;
    X = 0.5;
    rand_x = 0.8;
    angle = 0;

    position = db.tracks[0].start_pos_2;
    tri = triangle(position, position, position);
    tri.points[1].x = tri.points[1].x+100; tri.points[1].y = tri.points[1].y+50;
    tri.points[2].x = tri.points[2].x+100; tri.points[2].y = tri.points[2].y-50;
}
void heat_rider_new::findPath()
{
    htmath ht_math;
    if (was_on_left && (ht_math.det(db.tracks[0].finish_line_a, db.tracks[0].finish_line_b, position) <= 0))
    {
        lap++;
        was_on_left = false;
        if (lap == 5)
            finished_race = true;
    }
    vec2d temp_pos;
    triangle old_tri = tri;
    while(true)
    {
        tri.rotate(-angle);
        temp_pos.x = position.x + 100;
        temp_pos.y = rand()%100 + min(tri.points[1].y, tri.points[2].y);
        temp_pos = temp_pos.normalized();
        temp_pos.rotate(angle);
        tri.rotate(angle);
        tri.move(temp_pos, 100);
        if ((!(tri.points[0].x >= db.tracks[0].grip_map.size()) && !(tri.points[0].y >= db.tracks[0].grip_map[0].size())) && db.tracks[0].grip_map[tri.points[0].x][tri.points[0].y] != 20)
            break;
        else
        {
            tri = old_tri;
            temp_pos = position;
            angle += 45;
        }
    }
    position = tri.points[0];
    if (ht_math.dist(position, db.tracks[0].finish_line_b) < 3000)
        was_on_left = true;
    path << position;
}
void heat_rider_new::findPathFull()
{
    while (!finished_race)
    {
        findPath();
    }
    QList<QStringList> path_to_save;
    QStringList str_vec;
    for (int i = 0; i < path.size(); i++)
    {
        str_vec << QString::number(path[i].x) << QString::number(path[i].y);
        path_to_save << str_vec;
    }
    db.CSV.save("tracks/sciecha.csv", path_to_save);
}
