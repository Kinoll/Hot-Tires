#include "database.h"

database::database()
{
    date.setDate(2014,4,6);

    is_home = true;
}
void database::load()
{
    track trk("gorzow");
    tracks.push_back(trk);
    heat_rider_new htr(tracks[0]);
    htr.findPathFull(tracks[0]);
    QList<QStringList> ridersData;
    ridersData = CSV.read("data/persons.csv");
    for (int i = 0; i<ridersData.size(); i++)
    {
        rider r;
        r.makeFromList(ridersData[i]);
        riders.append(r);
    }
    int i = 0;
    while (CSV.exist("data/teams/"+QString::number(i)+".csv"))
    {
        team t;
        t.makeFromList(CSV.read("data/teams/"+QString::number(i)+".csv"), riders);//tutaj
        teams.append(t);
        i++;
    }
    //////
    QVector <heat_rider_new*> rnew(4);
    rnew[0] = new heat_rider_new(tracks[0]);
    rnew[1] = new heat_rider_new(tracks[0]);
    rnew[2] = new heat_rider_new(tracks[0]);
    rnew[3] = new heat_rider_new(tracks[0]);
    rnew[0]->helmet_colour="r";
    rnew[1]->helmet_colour="b";
    rnew[2]->helmet_colour="w";
    rnew[3]->helmet_colour="y";
    heat_new het;

    het.runHeat(QList<heat_rider_new*>::fromVector(rnew), true, tracks[0]);
    return;
    //////
    ridersData = CSV.read("data/calendar.csv");
    for (int i = 0; i < ridersData.size(); i++)
    {
        QDate d(ridersData[i][2].toInt(), ridersData[i][1].toInt(), ridersData[i][0].toInt());
        track t(ridersData[i][3]);
        if (ridersData[i][4] == "0")
        {
            QList<team*> ts;
            ts << &teams[ridersData[i][5].toInt()] << &teams[ridersData[i][6].toInt()];
            addMatch(d, t, ts, ridersData[i][4].toInt());
        }
        else if (ridersData[i][4] == "1")
        {
            QList<rider*> r;
            for (int k = 5; k < ridersData[i].size(); k++)
                r << &riders[ridersData[i][k].toInt()];
            addMatch(d, t, r, ridersData[i][4].toInt());
        }
    }


}
void database::addMatch(QDate date_, track track_, QList<team*> t, int type)
{
    if (type == 0)
    {
    dmp m(date_, track_, t);
    dmps << m;
    }
    addEvent(date_, "dmp");
}
void database::addMatch(QDate date_, track track_, QList<rider *> r, int type)
{
    if (type == 1)
    {
        ind16 m(date_, track_, r);
        ind16s << m;
    }
    addEvent(date_, "ind16");
}

void database::addEvent(QDate d, QString ev_type)
{
    event_game ee;
    ee.date = d;
    ee.event_type = ev_type;
    events.append(ee);
}

database db;
