/*Klasa reprezentujaca zawodnika, ktory jest uczestnikiem zawodow/biegu*/

#include "heat_rider.h"

heat_rider::heat_rider()
{
    pathIndex = 0;
    position << 0.0 << 0.0;
    desiredVelocity << 0.0 << 0.0;
    velocity << 0.0 << 0.0;
    steering << 0.0 << 0.0;
    maxSteering = 1.3;
    baseSteering = 1.3;
    mass = 27.0;
    baseSpeed = 3.2;
    maxTorque = baseSpeed;
    place = 0;
    lap = 1;
    wasOnLeft = false;
    finishedRace = false;
    counted = false;
    X = 0.5;
    randX = 0.8;

}
//////////////
float heat_rider::truncate(float a, float max)
/*Obciecie float do wartosci maksymalnej*/
{
    if(a>max)
    {
        a = max;
    }
    return a;
}

//////////////
float heat_rider::distance(QVector<float> A, QVector<float> B)
{
    //float d = sqrt (( (A[0]-B[0]) * (A[0]-B[0]) ) + ( (A[1]-B[1]) * (A[1]-B[1]) )) ; //wzor na odleglosc miedzy punktami, bez pierwiastkowania, dla optymalziacji.
    return  ( (A[0]-B[0]) * (A[0]-B[0]) ) + ( (A[1]-B[1]) * (A[1]-B[1]) );
}
float heat_rider::dot(QVector<float> A, QVector<float> B, QVector<float> C)
/*Tzw. dot product*/
{
    QVector<float> AB(2);
    QVector<float> BC(2);
    AB[0] = B[0]-A[0];
    AB[1] = B[1]-A[1];
    BC[0] = C[0]-B[0];
    BC[1] = C[1]-B[1];
    float dot = AB[0] * BC[0] + AB[1] * BC[1];
    return dot;
}
float heat_rider::cross(QVector<float> A, QVector<float> B, QVector<float> C)
/*Cross product*/
{
    QVector<float> AB(2);
    QVector<float> AC(2);
    AB[0] = B[0]-A[0];
    AB[1] = B[1]-A[1];
    AC[0] = C[0]-A[0];
    AC[1] = C[1]-A[1];
    float cross = (AB[0] * AC[1]) - (AB[1] * AC[0]);
    return cross;
}


float heat_rider::determinant(QVector<float> x, QVector<float> y, QVector<float> pos)
/*Wyznacznik macierzy 3x2, w celu sprawdzenia czy punkt jest po lewej, czy po prawej stronie odcinka
x1*y2 + x2*y3 + x3*y1 - x1*y3 - x2*y1 - x3*y2*/
{
    return (( x[0]*y[1] ) + ( y[0]*pos[1] ) + ( pos[0]*x[1] ) - ( x[0]*pos[1] ) - ( y[0]*x[1] ) - ( pos[0]*y[1] ));
}

QVector<float> heat_rider::normalize(QVector<float> vector)
/*Normalizacja wektora*/
{
    float d = sqrt(vector[0]*vector[0] + vector[1]*vector[1]);
    QVector<float> normVector(2);
    normVector[0] = vector[0]/d;
    normVector[1] = vector[1]/d;
    return normVector;
}

void heat_rider::move()
/*Fizyka, AI i ruch zawodnika*/
{
    /*Liczenie okrazen*/
    if (wasOnLeft)
    {
        if ( determinant(finishLineA, finishLineB, position) <= 0)
        {
            lap++;
            wasOnLeft = false;
            if (lap == 5) finishedRace = true;
        }
    }
    if (distance(finishLineB, position) < 3000)
        wasOnLeft = true;
    /*Wyznaczanie kolejnego celu ze sciezki i dodanie czynnika losowego do predkosci zawodnika*/
    if (distance(target, position) < 1000) //odleglsoc powinna byc podniesiona do kwadratu
    {
        maxTorque = baseSpeed + ((float)rand()/((float)RAND_MAX/X));//losowanie bonsuu do predksoci
        maxSteering = baseSteering + ((float)rand()/((float)RAND_MAX/randX));
        if(pathIndex < riderPath1.size())
        {
            target = riderPath1[pathIndex]; //nadanie nowego celu zawodnikowi
            target[0]+=( rand() % 15 ) + 0;
            target[1]+=( rand() % 15 ) + 0;
            pathIndex++;
            //wasOnLeft = true;
        }
        else{pathIndex = 0;}
    }
    /*Algorytm ruchu. Nie che tego tlumaczyc zbytnio.*/
    QVector<float> tempVector(2), temp(2);
    temp[0] = target[0]-position[0];
    temp[1] = target[1]-position[1];
    tempVector = normalize(temp);
    desiredVelocity[0] = tempVector[0]*maxTorque;
    desiredVelocity[1] = tempVector[1]*maxTorque;
    steering[0] = desiredVelocity[0] - velocity[0];
    steering[1] = desiredVelocity[1] - velocity[1];
    steering[0] = truncate( steering[0], maxSteering );
    steering[1] = truncate( steering[1], maxSteering );
    steering[0] = steering[0] / mass;
    steering[1] = steering[1] / mass;
    velocity[0] = truncate(velocity[0]+steering[0], maxTorque);
    velocity[1] = truncate(velocity[1]+steering[1], maxTorque);
    position[0]+=(velocity[0]); //przemieszczenie
    position[1]+=(velocity[1]); //
    movementRecord.append(position); //zapisanie pozycji zawodnika w danej klatce
    tempVector.clear();
    temp.clear();
}
void heat_rider::clear()
{
    movementRecord.clear();
    pathIndex = 0;
    position.clear();
    position << 0.0 << 0.0;
    desiredVelocity.clear();
    desiredVelocity << 0.0 << 0.0;
    velocity.clear();
    velocity << 0.0 << 0.0;
    steering.clear();
    steering << 0.0 << 0.0;
    maxSteering = 1.3;
    baseSteering = 1.3;
    mass = 27.0;
    baseSpeed = 3.2;
    maxTorque = baseSpeed;
    place = 0;
    lap = 1;
    wasOnLeft = false;
    finishedRace = false;
    counted = false;
    X = 0.5;
    randX = 0.8;
}

