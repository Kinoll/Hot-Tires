#ifndef RIDER_CONTAINER_H
#define RIDER_CONTAINER_H
#include <QList>
#include <QString>
#include <QDate>
#include "rider.h"
#include "heat_rider.h"

class rider_container
{
public:
    rider_container();
    int teamId;
    QVector<rider*> riders;
    QList<heat_rider> heat_riders;
    bool is_correct;
    void add(int index, rider *r);
    void add(rider *r);
    bool check(QString type, QDate date);
};

#endif // RIDER_CONTAINER_H
