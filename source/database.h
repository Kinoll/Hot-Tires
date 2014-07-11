#ifndef DATABASE_H
#define DATABASE_H
//#include "manager.h"
//#include "nation.h"
//#include "rider.h"
//#include "team.h"
#include "csv.h"
//#include "rider_container.h"
#include <QDate>
//#include "event_game.h"
#include "dmp.h"
#include "ind16.h"
//#include "pgm.h"
//#include "heat.h"

class database
{
public:
    database();

    void load();
    void addMatch(QDate date_, track track_, QList<team*> t, int type);
    void addMatch(QDate date_, track track_, QList<rider *> r, int type);
    void addEvent(QDate d, QString ev_type);
    void makeCalendar();

    bool is_home;

    csv CSV;
    QList<rider> riders;
    QList<team> teams;
    QList<dmp> dmps;
    QList<ind16> ind16s;
    QList<event_game> events;
    QVector<track> tracks;
    rider blank_rider;
    QDate date;

};
extern database db;

#endif // DATABASE_H
