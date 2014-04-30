#include "track.h"

track::track(QString trackName)
{
    name = trackName;
    QList <QStringList> temp = CSV.read("tracks/"+name+"/data.csv");
    finishLineA << temp[0][0].toFloat() << temp[0][1].toFloat();
    finishLineB << temp[1][0].toFloat() << temp[1][1].toFloat();
    startPos1 << temp[2][0].toFloat() << temp[2][1].toFloat();
    startPos2 << temp[3][0].toFloat() << temp[3][1].toFloat();
    startPos3 << temp[4][0].toFloat() << temp[4][1].toFloat();
    startPos4 << temp[5][0].toFloat() << temp[5][1].toFloat();
    start << startPos1 << startPos2 << startPos3 << startPos4;

    QList <QStringList> path = CSV.read("tracks/"+name+"/path.csv");

    QList <float> temp1;
    QStringList temp2;
    temp.clear();
    while(path.isEmpty()==false)
    {
        temp2 = path.takeFirst();
        temp1 << temp2[0].toFloat();
        temp1 << temp2[1].toFloat();
        path1 << temp1.toVector();
        temp1.clear();
        temp2.clear();
    }
}
/*void track::makeFromList(QList<QStringList> ttrackData)
{
    int x = 0;
    float xpos;
    float ypos;
    trackData = ttrackData;
    QStringList tempPath1 = trackData[0][1].split(";");
    QStringList tempPath2 = trackData[0][2].split(";");
    while(tempPath1.isEmpty() == false)
    {
        xpos = tempPath1[x].split(",")[0].toFloat();
        ypos = tempPath1[x].split(",")[1].toFloat();
        pathVector[0] = xpos;
        pathVector[1] = ypos;
        path1.append(pathVector);
        x++;
    }
    x = 0;
    while(tempPath2.isEmpty() == false)
    {
        xpos = tempPath2[x].split(",")[0].toFloat();
        ypos = tempPath2[x].split(",")[1].toFloat();
        pathVector[0] = xpos;
        pathVector[1] = ypos;
        path2.append(pathVector);
        x++;
    }
    x = 1;
    for (int y = 1; y<151; y++)
    {
        gripMap[x-1][y-1] = trackData[x][y].toFloat();
        x++;
    }
}*/

/*float track::getGrip(QList<float> riderPos)
{
    return gripMap[(int)riderPos[0]][(int)riderPos[1]];
}
*/
