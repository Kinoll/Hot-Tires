#ifndef LOAD_SAVE_H
#define LOAD_SAVE_H
#include "csv.h"
#include "rider.h"
#include "team.h"
#include <QStringList>
#include <QList>

class load_save
{
private:
    csv CSV;
public:
    load_save();
    void load(QList<team> &teams, QList<rider> &riders);
};

#endif // LOAD_SAVE_H
