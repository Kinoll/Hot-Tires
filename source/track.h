#ifndef TRACK_H
#define TRACK_H
#include<stdlib.h>
#include<QStringList>
#include<QString>
#include<QList>
#include<QVector>
#include<csv.h>
#include "pgm.h"
#include "vec2d.h"

class track
{
public:
    csv CSV;
    track(){};
    track(QString trackName);
    //void makeFromList(QList<QStringList> trackData);
    //float getGrip(QList<float> riderPos);
    QList<QStringList> trackData;
    int width;
    int length;
    int id;
    QString name;
    QVector< QVector<float> > path1;
    //QList<float> pathVector;
    QVector< QVector <int> > grip_map;
    QVector<float>  finishLineA, finishLineB;
    QVector<float> startPos1, startPos2, startPos3, startPos4;
    QVector < QVector <float> > start;
    vec2d finish_line_a, finish_line_b, start_pos_2, start_pos_3, start_pos_4, start_pos_1, line_a, line_b;
    ~track(){;}

};

#endif // TRACK_H
