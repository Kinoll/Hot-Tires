#include "ind16.h"


ind16::ind16(QDate date_, track track_, QList<rider *> r)
{
    standings_m.rider_points.resize(16);
    table_of_heats.heats.resize(20);
    for(int i = 0; i < 20; i++)
    {
        table_of_heats.heats[i].start_positions.resize(4);
        table_of_heats.heats[i].number = i;
    }
    QList<QStringList> table_from_file = CSV.read("rules/ind16.csv");
    for (int i = 0; i< table_from_file.size(); i++)
    {
        for (int n = 0; n < 4; n++)
        {
            table_of_heats.heats[i].number = i;
            table_of_heats.heats[i].start_positions[n].helmet = table_from_file[i][n][2];
            table_of_heats.heats[i].start_positions[n].rider_number = table_from_file[i][n].left(2).toInt()-1;
            table_of_heats.heats[i].start_positions[n].number = n;
        }
    }
    riders_list = r.toVector();
    date = date_;
    h = new heat(track_.name);
    event_type = "ind16";
    heat_number = 0;
    containers.resize(1);
}


