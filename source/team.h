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
    rider *getRiderByName(QString name);
};

#endif // TEAM_H
