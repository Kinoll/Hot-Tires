#include "load_save.h"

load_save::load_save(){}

void load_save::load(QList<team> &teams, QList<rider> &riders)
{
    QList<QStringList> ridersData;

    ridersData = CSV.read("data/persons.csv");
    for (int i = 0; i<ridersData.size(); i++)
    {
        rider r;
        r.makeFromList(ridersData[i]);
        riders.append(r);
    }
    for (int i =0; i<=200; i++)
    {
        if (!CSV.exist("data/teams/"+QString::number(i)+".csv"))
            break;
        team t;
        t.makeFromList(CSV.read("data/teams/"+QString::number(i)+".csv"), riders);//tutaj
        teams.append(t);
    }

}
