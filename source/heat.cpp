/*
Klasa biegu przystosowana do uzycia w klasie zawodow. Oto przyklad jej uzycia:

    heat_rider r1, r2, r3, r4; //zawodnicy wystepuajcy w zawodach
    heat h("gorzow"); //incjujemy obiekt biegu tylko raz na cale zawody

    QList<heat_rider> riders;

    //nadawanie pol startowych i kolorow kaskow zawodnikom
    r1.startPosition = 0; r1.helmetColour = "r";
    r2.startPosition = 1; r2.helmetColour = "b";
    r3.startPosition = 2; r3.helmetColour = "w";
    r4.startPosition = 3; r4.helmetColour = "y";
    //Lista zawodnikow jadacych w biegu, nalezy ja podac wedlug kolejnsoci pol startowych.
    //Uprzedzajac pytania - nie ma znaczenia ilu zawodnikow jedzie i czy jest miedzy nimi wolne pole startowe.
    riders << r1 << r2 << r3 << r4;

    h.runHeat(riders, true);//puszczenie biegu (true jesli graficzny)

    *********************************************************************************************

    Aby odczytac pozycje zawodnikow po biegu nalezy:

    h.riders[0].place;
    h.riders[1].place;

    itd.
*/

#include "heat.h"

heat::heat(track trk)
{
    Track = & trk;
}
heat::~heat()
{
    delete Track;
}

void heat::runHeat(QList<heat_rider*> riders, bool graphical)//graphical - czy bieg ma zostac wyswietlony
/*Puszczenie biegu*/
{
    //riders = riders1;
    int lengthOfHeat = 0;
    int place = 1;
    int index = 0;
    QStringList tempList, tempSet;
    QList<QStringList> tempRec, settings;
    QVector < QList<QStringList> > records;
    for (int n = 0; n < riders.size(); n++)
    {
        tempSet << riders[n]->helmetColour;//zapisanie kaskow zawodnikow na potrzeby renderowania

        riders[n]->finishLineA = Track->finishLineA;//linia mety
        riders[n]->finishLineB = Track->finishLineB;//
        riders[n]->position = Track->start[riders[n]->startPosition];//pozycja na starcie
        riders[n]->target = riders[n]->position;
        riders[n]->riderPath1 = Track->path1;//przekazanie sciezki zawodnikowi
    }
    /*Petla odpowiadajaca za przemieszczanie zawodnikow*/
    for (int i=0; i<30000; i++)
    {
        for (int n = 0; n < riders.size(); n++)
        {

            riders[n]->move();//przemieszcznie zawodnika
            if (riders[n]->finishedRace && !riders[n]->counted)//kolejnosc zawodnikow na mecie
            {
                riders[n]->place = place;
                place++;
                riders[n]->counted = true;
            }
        }
        if (place == riders.size()+1) {break;}//konczenie petli biegu po przekroczeniu lini mety przez wszystkich zawodnikow
        lengthOfHeat++;
    }
    /*Zapisywanie ruchu zawodnikow jesli bieg jest w trybie graficznym*/
    if (graphical)
    {
        QFile::remove("heat/pos1.csv");
        QFile::remove("heat/pos2.csv");
        QFile::remove("heat/pos3.csv");
        QFile::remove("heat/pos4.csv");
        QFile::remove("heat/settings.csv");

        settings.append(tempSet);
        tempSet.clear();
        tempSet << Track->name;
        settings.append(tempSet);

        for (int n = 0; n < riders.size(); n++)
        {
            index = n;

            for (int i=0; i<lengthOfHeat-1; i++)
            {
                tempList.append(QString::number(riders[index]->movementRecord[i][0]));
                tempList.append(QString::number(riders[index]->movementRecord[i][1]));
                tempRec.append(tempList);
                tempList.clear();
            }
            records << tempRec;
            tempRec.clear();
        }
        //if (graphical)
        if (records.size() >= 1) CSV.save("heat/pos1.csv", records[0]);
        else {QFile::remove("heat/pos1.csv");}
        if (records.size() >= 2) CSV.save("heat/pos2.csv", records[1]);
        else {QFile::remove("heat/pos2.csv");}
        if (records.size() >= 3) CSV.save("heat/pos3.csv", records[2]);
        else {QFile::remove("heat/pos3.csv");}
        if (records.size() >= 4) CSV.save("heat/pos4.csv", records[3]);
        else {QFile::remove("heat/pos4.csv");}
        CSV.save("heat/settings.csv", settings);
        QProcess::execute("heat/bieg.exe"); //wlaczenie "biegu" 2d

    }
}

