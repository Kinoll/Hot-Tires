#include "heat_rider_new.h"


heat_rider_new::heat_rider_new(track & trk)
{
    path_index = 1;
    steering_base = 1.7;
    steering_max = 2.2;
    mass = 30;
    speed_base = 12;
    torque_max = 3;
    speed_max = 3.2;
    place = 0;
    lap = 1;
    was_on_left = false;
    finished_race = false;
    counted = false;
    X = 1.4;
    rand_x = 0.8;
    angle = 0;
    position = trk.start_pos_2;
    norm_vel = vec2d(1,0);
    bonus = 0;
    speed_last = 0;
    was_ahead = false;
    was_slowed = false;
}
void heat_rider_new::findPath(track & trk)
{
    htmath ht_math;
    if (was_on_left && (ht_math.det(trk.finish_line_a, trk.finish_line_b, position) > 0))
    {
        lap++;
        was_on_left = false;
        if (lap == 5)
            finished_race = true;
    }
    //vec2d temp_pos;
    bool started = false;
    vec2d veloc = norm_vel;
    while(true)
    {
        veloc.rotate(-angle);
        vec2d temp_pos = position + veloc * 190.0;
        vec2d temp_pos2 = position + veloc * 60.0;
        //tri.move(temp_pos, 100);
        if ((!(temp_pos.y >= trk.grip_map.size()) && !(temp_pos.x >= trk.grip_map[0].size()))
            && (temp_pos.x >= 0 && temp_pos.y >= 0)
            && (trk.grip_map[temp_pos.y][temp_pos.x] != 20)
            && (trk.grip_map[temp_pos2.y][temp_pos2.x] != 20))
        {
            position = position + veloc*60;
            angle =0;
            break;
        }
        else
        {
            angle = 10;
        }
    }
    //position = tri.points[0];
    if ((ht_math.det(trk.line_a, trk.line_b, position) <= 0))
        was_on_left = true;
    path << position;
    norm_vel = veloc;
}
void heat_rider_new::findPathFull(track &trk)
{
    position = trk.start_pos_2;
    //target = position;
    while (!finished_race)
    {
        findPath(trk);
    }
    QList<QStringList> path_to_save;
    QStringList str_vec;
    for (int i = 0; i < path.size(); i++)
    {
        str_vec << QString::number(path[i].x) << QString::number(path[i].y);
        //if (!(i%1))
        {
            path_to_save << str_vec;
            str_vec.clear();
        }
    }
    path_to_save.removeLast();
    CSV.save("tracks/gorzow/path.csv", path_to_save);
    trk = track("gorzow");
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
    if (moves%130 == 0)
        bonus = float(( rand() % 40 ) + -20);
    if (ht_math.dist(target, position) < 1200)
    {
        //speed_max = ((speed_base + ((float)rand()/((float)RAND_MAX/X)))*(20-trk.grip_map[position.y][position.x]*0.5))/16;
        steering_max = steering_base + ((float)rand()/((float)RAND_MAX/rand_x));
        if (path_index < path.size())
        {
            target = path[path_index];
            target.x += bonus;
            target.y += bonus;
            path_index++;
            was_ahead = false;
            was_slowed = false;
        }
        else
        {
            was_on_left = true;
            path_index = 1;
        }
    }
    speed_max = speed_base + X*(20-trk.grip_map[position.y][position.x])/8;
    vec2d temp = target - position;
    temp = temp.normalized();
    //desired_velocity = temp*torque_max;

    if (speed_last<=speed_max)
        torque_max += 0.007;
    else
        torque_max -= 0.007;
    speed_last = speed_max;
    torque_max = ht_math.trun(torque_max, steering_max);
    steering = ht_math.trun((temp*torque_max - velocity), steering_max)/mass;
    velocity = ht_math.trun((velocity+steering), torque_max);
    position = position + velocity;
    movement_record.append(position.toQVector());
    //if ((ht_math.dist(trk.finish_line_b, position) < 3000)&& (moves > 250))
       // was_on_left = true;
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
