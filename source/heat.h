#ifndef HEAT_H
#define HEAT_H
#include "heat_rider.h"
#include "csv.h"
//#include "database.h"
#include <QProcess>
class heat
{
public:
    heat();
    track* trck;
    csv CSV;
    void runHeat(QList<heat_rider *> riders, bool graphical, track & trk);
};

#endif // HEAT_H
