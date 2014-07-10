#ifndef IND16_H
#define IND16_H
#include "match.h"

class ind16 : public match
{
private:

public:
    ind16(QDate date_, track* track_, QList<rider *> r);
    ~ind16(){;}

};

#endif // IND16_H
