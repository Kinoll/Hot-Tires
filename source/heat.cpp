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

heat::heat()
{
}
void heat::runHeat(QList<heat_rider *> riders, bool graphical, track & trk)
{
    trck = &trk;
    int length_of_heat = 0;
    int place = 1;
    QStringList temp_list, temp_set;
    QList<QStringList> temp_rec, settings;
    QVector < QList<QStringList> > records;
    vec2d target_first;
    target_first.fromQVector(trk.path1[1]);
    for (int i = 0; i < riders.size(); i++)
    {
        temp_set << riders[i]->helmet_colour;

        riders[i]->getPath(trk);
        riders[i]->target = target_first;
    }
    riders[0]->position = trk.start_pos_1;
    riders[1]->position = trk.start_pos_2;
    riders[2]->position = trk.start_pos_3;
    riders[3]->position = trk.start_pos_4;
    for (int i = 0; i < 30000; i++)
    {
        for (int k = 0; k < riders.size(); k++)
        {
            for (int j = 0; j < riders.size(); j++)
            {
                if (j!=k && !riders[k]->was_ahead && riders[k]->was_slowed)
                {
                    if (ht_math.dist(riders[k]->position, riders[j]->position) < 300)
                    {
                        if(riders[k]->position.y-300 > 0)
                        {
                            if(riders[k]->position.x < riders[j]->position.x )
                            {
                                riders[k]->speed_max-=8;
                                riders[k]->torque_max-=0.5;
                                riders[k]->was_slowed = true;
                                riders[j]->was_ahead = true;
                            }
                        }
                        else
                        {
                            if(riders[k]->position.x > riders[j]->position.x)
                            {
                                riders[k]->speed_max-=8;
                                riders[k]->torque_max-=0.5;
                                riders[k]->was_slowed = true;
                                riders[j]->was_ahead = true;
                            }
                        }
                        break;
                    }
                }
            }
            riders[k]->move(trk);
            if (riders[k]->finished_race && !riders[k]->counted)
            {
                riders[k]->place = place;
                place ++;
                riders[k]->counted = true;
            }
        }
        if (place == riders.size() + 1)
            break;
        length_of_heat++;
    }
    if (graphical)
    {
        QFile::remove("heat/pos1.csv");
        QFile::remove("heat/pos2.csv");
        QFile::remove("heat/pos3.csv");
        QFile::remove("heat/pos4.csv");
        QFile::remove("heat/settings.csv");
        settings.append(temp_set);
        temp_set.clear();
        temp_set << trk.name;
        settings.append(temp_set);
        for (int i = 0; i < riders.size(); i++)
        {
            for (int k = 0; k < length_of_heat - 1; k++)
            {
                temp_list.append(QString::number(riders[i]->movement_record[k][0]));
                temp_list.append(QString::number(riders[i]->movement_record[k][1]));
                temp_rec.append(temp_list);
                temp_list.clear();
            }
            records << temp_rec;
            temp_rec.clear();
        }
        if (records.size() >= 1) CSV.save("heat/pos1.csv", records[0]);
        else {QFile::remove("heat/pos1.csv");}
        if (records.size() >= 2) CSV.save("heat/pos2.csv", records[1]);
        else {QFile::remove("heat/pos2.csv");}
        if (records.size() >= 3) CSV.save("heat/pos3.csv", records[2]);
        else {QFile::remove("heat/pos3.csv");}
        if (records.size() >= 4) CSV.save("heat/pos4.csv", records[3]);
        else {QFile::remove("heat/pos4.csv");}
        CSV.save("heat/settings.csv", settings);
        QProcess::execute("bieg.exe");
    }
}


