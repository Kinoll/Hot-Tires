#ifndef TEAM_H
#define TEAM_H

#include <rider.h>
#include <person.h>
#include <QStringList>

class team
{
public:
    team();
    QList<rider*> persons;
    void makeFromList(QList<QStringList> t, QList<rider> &riders);
    QStringList getRidersTextRepresenatation();
    QString city, name;
    int id;
    QVector<int> coaches, couches_youth,
    physical_coaches, psyche_coaches, talent_seekers; /* If you want to read it from file, you have to add it to .csv file */
    rider *getRiderByName(QString name);
};

#endif // TEAM_H
