#include "dmp.h"

dmp::dmp(QDate date_, track *track_, QList<team*> t)
{
    players_team_participates  = false;
    standings_m.rider_points.resize(16);
    standings_m.rider_rn.resize(16);
    standings_m.rider_rt.resize(16);
    standings_m.rider_zz.resize(16);
    standings_m.team_points.resize(16);
    standings_m.team_points[15].resize(2);
    standings_m.rider_points_sum.resize(16);
    table_of_heats.heats.resize(15);
    for (int i = 0; i < 16; i++)
    {
        standings_m.rider_rn[i] = 0;
        standings_m.rider_rt[i] = 0;
        standings_m.rider_zz[i] = 0;
    }

    for (int i = 0; i < 15; i++)
    {
        table_of_heats.heats[i].start_positions.resize(4);
        table_of_heats.heats[i].number = i;
        standings_m.team_points[i].resize(2);
        standings_m.team_points[i][0] = 0;
        standings_m.team_points[i][1] = 0;
    }
    QList<QStringList> table_from_file = CSV.read("rules/dmp.csv");
    for (int i = 0; i < table_from_file.size(); i++)
    {
        for (int n = 0; n < 4; n++)
        {
            table_of_heats.heats[i].number = i;
            table_of_heats.heats[i].start_positions[n].helmet = table_from_file[i][n][2];
                table_of_heats.heats[i].start_positions[n].rider_number = table_from_file[i][n].left(2).toInt()-1;
            table_of_heats.heats[i].start_positions[n].number = n;
        }
    }
    teams = t;
    date = date_;
    h = new heat();
    event_type = "dmp";
    heat_number = 0;
    containers.resize(2);

    for (int i = 0; i < teams.size(); i++)
    {
        if(teams[i]->id == 0) //zmienic warunek na prawdziwy
        {
            players_team = teams[i]->id;
            players_team_participates = true;
        }
    }
}

QList<int> dmp::possibleChanges(int team_number, int change_type, int position)
{
    QList<int> possible_changes;
    int last_index = 15;
    int first_index = 9;
    if (team_number == 0)
    {
        first_index = 0;
        last_index = 7;
    }
    for(int i = first_index; i < last_index; i++)
    {
        if (isChangeValid(i, position, change_type, team_number))
                possible_changes << i;
    }
    return possible_changes;
}

bool dmp::isChangeValid(int riders_number, int position, int type, int team_number)
{
    int r_num = table_of_heats.heats[heat_number].start_positions[position].rider_number;
    bool valid = false;
    if (r_num == riders_number)
        return valid;
    else if (type == 0)
    {
       valid = ( ( (riders_number == 5) || (riders_number == 6) || (riders_number == 13) || (riders_number == 14) )
                       &&  (!( (r_num == 5)||(r_num == 6) || (r_num == 13) || (r_num == 14) )) &&
                              ( ( (standings_m.rider_rn[riders_number] < 2) && (heat_number >= 4) )));
    }
    else if (type == 1)
    {
        valid = ((heat_number >= 4)
                && (!( (r_num == 5)||(r_num == 6) || (r_num == 13) || (r_num == 14) ) )
                && (standings_m.rider_rt[riders_number] < 1)
                && (standings_m.team_points[15][!team_number] - standings_m.team_points[15][team_number] >= 6));
        //(!( (riders_number == 5) || (riders_number == 6) || (riders_number == 13) || (riders_number == 14) ) )

    }
    else if (type == 2)
    {
        valid = (heat_number >= 4) && (standings_m.rider_zz[riders_number] < 1) && false; //dodanie zawodnika z/z i usuniecie false
    }
    return valid;
}
QStringList dmp::getRidersTextRepresentation(int team_number)
{
    QStringList riders;
    int last_index, first_index;
    if (team_number == 1)
    {
        first_index = 0;
        last_index = 7;
    }
    else
    {
        first_index = 9;
        last_index = 16;
    }

    for (int i = first_index; i < last_index; i++)
    {
        riders.append(QString::number(i+1)+ " " + riders_list[i]->surname);
    }
    return riders;
}
QStringList dmp::getRidersTextRepresentation(QList<int> possible_changes)
{
    QStringList riders;
    for (int i = 0; i < possible_changes.size(); i++)
    {
        riders.append(QString::number(possible_changes[i]+1)+ " " + riders_list[possible_changes[i]]->surname);
    }
    return riders;
}

void dmp::doSomethingAfterHeat()
{
    for (int i = 0; i < 4; i++)
    {
        if (table_of_heats.heats[heat_number].start_positions[i].rider_number < 8)
            standings_m.team_points[heat_number][0] += standings_m.rider_points[table_of_heats.heats[heat_number].start_positions[i].rider_number].last();
        else
            standings_m.team_points[heat_number][1] += standings_m.rider_points[table_of_heats.heats[heat_number].start_positions[i].rider_number].last();
    }
    standings_m.team_points[15][0] += standings_m.team_points[heat_number][0];
    standings_m.team_points[15][1] += standings_m.team_points[heat_number][1];
}
QString dmp::pointsTextRepresentation()
{
    QString text = "<b>" + teams[0]->name + "</b><br><br>";
    for (int i = 0; i < 7; i++)
    {
        text += riders_list[i]->surname + " (";
        for (int k = 0; k < standings_m.rider_points[i].size(); k++)
        {
            if (k != 0)
                text += ", ";
            text += QString::number(standings_m.rider_points[i][k]);
        }
        text += ")<br>";
    }
    text += "<br><br><br>";
    text += "<b>" + teams[1]->name + "</b><br><br>";
    for (int i = 8; i < 15; i++)
    {
        text += riders_list[i]->surname + " (";
        for (int k = 0; k < standings_m.rider_points[i].size(); k++)
        {
            if (k != 0)
                text += ", ";
            text += QString::number(standings_m.rider_points[i][k]);
        }
        text += ")<br>";
    }
    return text;
}
QList<int> dmp::nominatedHeatsRiders(int team_number)
{
    int first, last;
    if (team_number == 0)
    {
        first = 0;
        last = 7;
    }
    else
    {
        first = 8;
        last = 15;
    }
    QVector<int> points(7);
    QVector<int> r_numbers(7);
    for (int i = 0; i < 7; i++)
    {
        points[i] = standings_m.rider_points_sum[i+first];
        r_numbers[i] = i+first;
    }
    for (int i = 0; i < 7; i++)
    {
        for(int k = 0; k < 7; k++)
        {
            if (points[i]>points[k] && i!=k)
            {
                std::swap(points[i], points[k]);
                std::swap(r_numbers[i], r_numbers[k]);
            }
        }
    }
    int riders_to_15 = 2;
    for (int i = 2; i < 7; i++)
    {
        if (points[i] == points[i-1])
            riders_to_15 += 1;
        else
            break;
    }
    r_numbers.resize(riders_to_15);
    return r_numbers.toList();
}
QList<int> dmp::positionInNominatedHeat(int team_number, int heat_num)
{
    int first, last;
    if (team_number == 0)
    {
        first = 0;
        last = 7;
    }
    else
    {
        first = 8;
        last = 15;
    }
    QList<int> positions;
    for (int i = 0; i < 4; i++)
    {
        if ( (table_of_heats.heats[heat_num].start_positions[i].rider_number >= first) && (table_of_heats.heats[heat_num].start_positions[i].rider_number < last))
            positions << i;
    }
    return positions;
}
