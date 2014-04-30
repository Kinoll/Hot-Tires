#ifndef RIDER_H
#define RIDER_H
#include "person.h"
#include "heat_rider.h"
class rider : public person
{

public:
    int startingSkills, reflex, psyche, ridingSkills,
    strength, condition, preparedToSeason, tactic,
    experience, docility, bravery, courage, talent;
    heat_rider rider_h;
    QList<QStringList> history;
    rider();
    void makeFromList(QStringList info);
};

#endif // RIDER_H
