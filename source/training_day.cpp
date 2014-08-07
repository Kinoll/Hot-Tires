#include "training_day.h"
#include "training.h"

training_day::training_day()
{
}

void training_day::perform()
{
    training* tr=new training(rider_id,training_scheme);
    tr->perform();
    delete(tr);
    //
}
