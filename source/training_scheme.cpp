#include "training_scheme.h"
#include <iostream>

training_scheme::training_scheme()
{
}

void training_scheme::makeFromList(QStringList info)
{



    name = info[0];

    start_and_reflex_training = info[1].toInt();

    ride_and_steer_training = info[2].toInt();

    team_ride_training=info[3].toInt();

    track_exp_training=info[4].toInt();

    track_id=info[5].toInt();

    psyche_training=info[6].toInt();

    condition_and_strength_training=info[7].toInt();



}
