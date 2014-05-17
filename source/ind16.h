#ifndef IND16_H
#define IND16_H
#include <rider_container.h>
#include "match.h"
#include <QList>
#include <QVector>
#include <QString>
#include <QStringList>
#include <csv.h>
#include "track.h"


class ind16 : public match
{
private:

public:
    ind16(QDate date_, track track_, QList<rider *> r);
    ~ind16(){;}

};

#endif // IND16_H
