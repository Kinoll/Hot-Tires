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

    tri = triangle(position, position, position);
    tri.points[1].x = tri.points[1].x+100; tri.points[1].y = tri.points[1].y+50;
    tri.points[2].x = tri.points[2].x+100; tri.points[2].y = tri.points[2].y-50;
}
void heat_rider_new::findPath(track & trk)
{
    htmath ht_math;
    if (was_on_left && (ht_math.det(trk.finish_line_a, trk.finish_line_b, position) <= 0))
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
        temp_pos.y = rand()%100 + ht_math.min(tri.points[1].y, tri.points[2].y);
        temp_pos = temp_pos.normalized();
        temp_pos.rotate(angle);
        tri.rotate(angle);
        tri.move(temp_pos, 100);
        if ((!(tri.points[0].x >= trk.grip_map.size()) && !(tri.points[0].y >= trk.grip_map[0].size()))
            && (tri.points[0].x >= 0 && tri.points[0].y >= 0)
            && (trk.grip_map[tri.points[0].x][tri.points[0].y] != 20))
            break;
        else
        {
            tri = old_tri;
            temp_pos = position;
            angle += 25;
        }
    }
    position = tri.points[0];
    if (ht_math.dist(position, trk.finish_line_b) < 3000)
        was_on_left = true;
    path << position;
}
void heat_rider_new::findPathFull(track &trk)
{
    position = trk.start_pos_2;
    target = position;
    while (!finished_race)
    {
        findPath(trk);
    }
    QList<QStringList> path_to_save;
    QStringList str_vec;
    for (int i = 0; i < path.size(); i++)
    {
        str_vec << QString::number(path[i].x) << QString::number(path[i].y);
        if (!(i%1))
        {
            path_to_save << str_vec;
            str_vec.clear();
        }
    }
    path_to_save.removeLast();
    CSV.save("tracks/sciecha.csv", path_to_save);
}
void heat_rider_new::move(track& trk)
{
    moves++;
    if (was_on_left && (ht_math.det(trk.finish_line_a, trk.finish_line_b, position) <= 0))
    {
        lap++;
        was_on_left = false;
        if (lap == 5)
            finished_race = true;
    }

    if (ht_math.dist(target, position) < 700)
    {
        speed_max = speed_base + ((float)rand()/((float)RAND_MAX/X));
        steering_max = steering_base + ((float)rand()/((float)RAND_MAX/rand_x));
        if (path_index < path.size())
        {
            target = path[path_index];
            target.x += float(( rand() % 15 ) + 0);
            target.y += float(( rand() % 15 ) + 0);
            path_index++;
        }
    }

    vec2d temp = target - position;
    temp = temp.normalized();
    //desired_velocity = temp*torque_max;
    steering = ht_math.trun((temp*torque_max - velocity), steering_max)/mass;
    velocity = ht_math.trun((velocity+steering), torque_max);
    position = position + velocity;
    movement_record.append(position.toQVector());
    if ((ht_math.dist(trk.finish_line_b, position) < 3000)&& (moves > 250))
        was_on_left = true;
}
void heat_rider_new::getPath(track& trk)
{
    for (int i = 0; i < trk.path1.size(); i++)
    {
        vec2d v;
        v.fromQVector(trk.path1[i]);
        path << v;
    }
}
