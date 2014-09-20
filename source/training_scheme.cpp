#include "training_scheme.h"
#include <iostream>

training_scheme::training_scheme()
{
}

training_scheme::training_scheme(QString lname)
{

    start_and_reflex_training=0;
    ride_and_steer_training=0;
    team_ride_training=0;
    track_exp_training=0;
    track_id=0;
    qint8 psyche_training=0;
    qint8 condition_and_strength_training=0;
    name=lname;
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



QString training_scheme::getName()
{
    return(name);
}

void training_scheme::setName(QString name)
{
    this->name=name;
}
