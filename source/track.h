#ifndef TRACK_H
#define TRACK_H
#include<stdlib.h>
#include<QStringList>
#include<QString>
#include<QList>
#include<QVector>
#include<csv.h>
#include "pgm.h"

class track
{
public:
    csv CSV;
    track(QString trackName);
    //void makeFromList(QList<QStringList> trackData);
    //float getGrip(QList<float> riderPos);
    QList<QStringList> trackData;
    int width;
    int length;
    QString name;
    QVector< QVector<float> > path1;
    //QList<float> pathVector;
    QVector< QVector <int> > grip_map;
    QVector<float>  finishLineA, finishLineB;
    QVector<float> startPos1, startPos2, startPos3, startPos4;
    QVector < QVector <float> > start;
    ~track(){;}

};

#endif // TRACK_H
