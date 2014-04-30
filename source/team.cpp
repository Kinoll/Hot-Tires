#include "team.h"

team::team()
{
}
void team::makeFromList(QList<QStringList> t, QList<rider> &riders)//tutaj
{
    for (int i = 0; i<t.size(); i++)
    {
        if (i == 0)
            for (int i = 0; i<t[0].size(); i++)
                persons.append(&riders[t[0][i].toInt()]);
        else if (i==1)
            city = t[1][0];
        else if (i==2)
            name = t[2][0];
        else if (i==3)
            id = t[3][0].toInt();
    }
}
QStringList team::getRidersTextRepresenatation()
{
    QStringList riders;
    for (int i = 0; i < persons.size(); i++)
    {
        riders.append(persons[i]->surname);
    }
    return riders;
}
rider* team::getRiderByName(QString name)
{
    for (int i = 0; i < persons.size(); i++)
        if (persons[i]->surname == name)
            return persons[i];
}
