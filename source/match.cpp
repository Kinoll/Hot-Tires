#include "match.h"

match::match()
{
}
match::~match()
{
    //delete h;
}

void match::mergeContainers(QVector<rider_container> con_vec)
{
    for (int i = 0; i < con_vec.size(); i++ )
        for (int k = 0; k < con_vec[i].riders.size(); k++)
            riders_list.append(con_vec[i].riders[k]);
}

QStringList match::runHeat(QList<rider>& r)
{
    QList<heat_rider*> riders;
    for (int i = 0; i < 4; i++)
    {
        riders << &riders_list[table_of_heats.heats[heat_number].start_positions[i].rider_number]->rider_h;
        riders[i]->clear();
        riders[i]->helmetColour = table_of_heats.heats[heat_number].start_positions[i].helmet;
        riders[i]->startPosition = table_of_heats.heats[heat_number].start_positions[i].number;
    }

    h->runHeat(riders, false);
    QStringList txt;
    QString stra;
    for (int i = 0; i < riders.size(); i++)
    {
        standings_m.rider_points[table_of_heats.heats[heat_number].start_positions[i].rider_number] << 4 - riders[i]->place;
        standings_m.rider_points_sum[table_of_heats.heats[heat_number].start_positions[i].rider_number] += 4 - riders[i]->place;
        stra = "<b>" + QString::number(4 - riders[i]->place)+ "</b> " + r[riders[i]->id].surname;
        txt << stra;
    }
    doSomethingAfterHeat();
    heat_number++;
    return txt;
}
int match::findIndex(int rider_id)
{
    for (int i = 0; i < riders_list.size(); i++)
    {
        if (rider_id == riders_list[i]->id)
            return i;
    }
    return -1;
}
void match::doSomethingAfterHeat()
{

}
