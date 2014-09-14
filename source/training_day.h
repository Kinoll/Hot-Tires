#ifndef TRAININGDAYINCLUB_H
#define TRAININGDAYINCLUB_H

#include <QStringList>
#include <QString>
#include <QDate>
#include <QVector>

//for all riders we create 7 this class objects (for every day of the week)
// trainig_day objects show rider's training plan specified day.



class training_day
{
private:
    qint16 rider_id;
    QString day_name;
    qint16 training_scheme;
    qint16 coach;


public:
    training_day();
    void perform();
    void makeFromList(QStringList info);
};

#endif // TRAININGDAYINCLUB_H
