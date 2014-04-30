#include "rider.h"

rider::rider() :
    person()
{
}
void rider::makeFromList(QStringList info)
{
    id = info[0].toInt();
    rider_h.id = id;
    name = info[1];
    surname = info[2];
    day = info[3].toInt();
    month = info[4].toInt();
    year = info[5].toInt();
    nation = info[6].toInt();
    startingSkills = info[7].toInt();
    reflex = info[8].toInt();
    psyche = info[9].toInt();
    ridingSkills = info[9].toInt();
    strength = info[10].toInt();
    condition = info[11].toInt();
    preparedToSeason = info[12].toInt();
    tactic = info[13].toInt();
    experience = info[14].toInt();
    docility = info[15].toInt();
    bravery = info[16].toInt();
    courage = info[17].toInt();
    talent = info[18].toInt();
}
