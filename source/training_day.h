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
public:
    qint16 rider_id;
    QString day_name;
    qint16 training_scheme;
    qint16 coach;
//todo implement getters and setters


public:
    training_day();
    void perform();
    void makeFromList(QStringList info);
    static int nameToInt(QString name);
    static QString intToName(int day);

};

#endif // TRAININGDAYINCLUB_H
