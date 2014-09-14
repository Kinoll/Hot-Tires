#include "training_day.h"
#include "training.h"

training_day::training_day()
{
}



void training_day::makeFromList(QStringList info)
{
    rider_id = info[0].toInt();
    day_name = info[1];
    training_scheme = info[2].toInt();
    coach = info[3].toInt();
}

void training_day::perform()
{
    training* tr=new training(rider_id,training_scheme,coach);
    tr->perform();
    delete(tr);
    //
}
