#ifndef HEAT_RIDER_H
#define HEAT_RIDER_H
#include <QList>
#include <math.h>
#include <QVector>
#include <QString>
#include <QStringList>
#include <QVector2D>
#include <time.h>

class heat_rider
{
public:
    heat_rider();
    QVector<float>position, velocity, target, desiredVelocity, steering;
    float determinant(QVector<float> x, QVector<float> y, QVector<float> pos);
    void clear();
    bool wasOnLeft, finishedRace, counted;
    int place, lap, id;
    float mass;
    float maxTorque;
    float grip;
    float baseSteering;
    float maxSteering;
    float baseSpeed;
    float X;
    float randX;
    QString helmetColour;
    int startPosition;
    QVector<float> finishLineA, finishLineB;
    int pathIndex;
    void getSpeed();
    QVector< QVector <float> > movementRecord, riderPath1, riderPath2;
    void move();
    float truncate(float a, float max);
    QVector<float> normalize(QVector<float> vector);
    void calculateVelocity();
    float distance(QVector<float> A, QVector<float> B);
    float dot(QVector<float> A, QVector<float> B, QVector<float> C);
    float cross(QVector<float> A, QVector<float> B, QVector<float> C);

};

#endif // HEAT_RIDER_H
