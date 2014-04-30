#ifndef DMP_H
#define DMP_H
#include <rider_container.h>
#include <match.h>
#include <QList>
#include <QVector>
#include <QString>
#include <QStringList>
#include <csv.h>
#include "track.h"



class dmp : public match
{
private:

public:
    dmp(QDate date_, track track_, QList<team *> t);
    bool isChangeValid(int riders_number, int position, int type, int team_number);
    QList<int> possibleChanges(int team_number, int change_type, int position);
    QList<int> nominatedHeatsRiders(int team_number);
    QStringList getRidersTextRepresentation(int team_number);
    QStringList getRidersTextRepresentation(QList<int> possible_changes);
    void doSomethingAfterHeat();
    QString pointsTextRepresentation();
    QList<team*> teams;
    int players_team;
    bool players_team_participates;
    QList<int> positionInNominatedHeat(int team_number, int heat_num);
    ~dmp(){}
};

#endif // DMP_H
