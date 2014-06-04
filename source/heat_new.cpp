#include "heat_new.h"

heat_new::heat_new()
{
}
void heat_new::runHeat(QList<heat_rider_new *> riders, bool graphical, track & trk)
{
    int length_of_heat = 0;
    int place = 1;
    QStringList temp_list, temp_set;
    QList<QStringList> temp_rec, settings;
    QVector < QList<QStringList> > records;
    for (int i = 0; i < riders.size(); i++)
    {
        temp_set << riders[i]->helmet_colour;

        riders[i]->getPath(trk);
    }
    for (int i = 0; i < 30000; i++)
    {
        for (int k = 0; k < riders.size(); k++)
        {
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
        if (records.size() >= 1) db.CSV.save("heat/pos1.csv", records[0]);
        else {QFile::remove("heat/pos1.csv");}
        if (records.size() >= 2) db.CSV.save("heat/pos2.csv", records[1]);
        else {QFile::remove("heat/pos2.csv");}
        if (records.size() >= 3) db.CSV.save("heat/pos3.csv", records[2]);
        else {QFile::remove("heat/pos3.csv");}
        if (records.size() >= 4) db.CSV.save("heat/pos4.csv", records[3]);
        else {QFile::remove("heat/pos4.csv");}
        db.CSV.save("heat/settings.csv", settings);
        QProcess::execute("heat/bieg.exe");
    }
}
