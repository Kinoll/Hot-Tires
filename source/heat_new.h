#ifndef HEAT_NEW_H
#define HEAT_NEW_H
#include "heat_rider_new.h"
#include "database.h"
class heat_new
{
public:
    heat_new();
    void runHeat(QList<heat_rider_new*> riders, bool graphical, track & trk);
};

#endif // HEAT_NEW_H
