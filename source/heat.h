#ifndef HEAT_H
#define HEAT_H
#include <track.h>
#include <rider.h>
#include <heat_rider.h>
#include <QStringList>
#include <QString>
#include <csv.h>
#include <QProcess>
class heat
{
private:
    track* Track;
public:
    QFile file;
    csv CSV;
    heat(QString track_name){Track = new track(track_name);}
    float distance(QList<float> point1, QList<float> point2);
    QList<float> getMagnitude(QList<float> point1, QList<float> point2);
    void runHeat(QList<heat_rider*> riders, bool graphical);
    //QList<heat_rider*> riders;
    //QVector < QList<QStringList> > records;
    //QList<QStringList> tempRec, settings;
    ~heat();

};

#endif // HEAT_H
