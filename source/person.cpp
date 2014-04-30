#include "person.h"

person::person()
{
}

void person::buildFromList(QStringList info)
{
    id = info[0].toInt();
    name = info[1];
    surname = info[2];
    day = info[3].toInt();
    month = info[4].toInt();
    year = info[5].toInt();
    nation = info[6].toInt();
}
