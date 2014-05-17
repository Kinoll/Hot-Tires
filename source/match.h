#ifndef MATCH_H
#define MATCH_H
#include <QDate>
#include <QList>
#include <QVector>
#include "rider_container.h"
#include "heat.h"
#include "heat_rider.h"
#include "team.h"
#include "track.h"
#include "event_game.h"

struct start_position
{
    QString helmet;
    int rider_number;
    int number;
};

struct match_heat
{
    int number;
    QVector<start_position> start_positions;

};
struct heat_table
{
    QVector<match_heat> heats;
};
struct standings
{
    QVector< QList<int> > rider_points;
    QVector<int> rider_points_sum;
    QVector<int> rider_rt;
    QVector<int> rider_rn;
    QVector<int> rider_zz;
    QVector< QVector<int> > team_points;
};


class match : public event_game
{
public:  
    match();
    heat *h;
    heat_table table_of_heats;
    QVector<rider_container> containers;
    standings standings_m;
    csv CSV;
    bool graphical;
    int heat_number;
    QVector<rider*> riders_list;
    QString weather; //typ do zmiany po stworzeniu klasy pogody - wskaznik na klase pogody
    QString points_text_representation;
    void mergeContainers(QVector<rider_container> con_vec);
    QStringList runHeat(QList<rider> &r);
    virtual void doSomethingAfterHeat();
    //virtual QString pointsTextRepresentation();
    int findIndex(int rider_id);
    ~match();
};

#endif // MATCH_H
