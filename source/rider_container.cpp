#include "rider_container.h"

rider_container::rider_container()
{
    is_correct = true;
}

void rider_container::add(int index, rider* r)
{
    riders[index] = r;
}
void rider_container::add(rider* r)
{
    riders << r;
    if (riders.size() > 0)
    {
        for (int i = 0; i < riders.size() - 1; i++)
            for (int k = 0; k < riders.size() - 1; k++)
                if (k != i)
                    is_correct *= (riders[i]->id != riders[k]->id);
    }
}
bool rider_container::check(QString type, QDate date)
{
    if (type == "dmp")
        return ((date.year()<=riders[6]->year+21)&&(date.year()<=riders[5]->year+21)&&is_correct);
}
