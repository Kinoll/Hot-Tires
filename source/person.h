#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <QStringList>
#include <QString>
using namespace std;
class person
{
public:
    QString name;
    QString surname;
    int id;
    int day;
    int month;
    int year;
    int nation;
    person();
    void buildFromList(QStringList info);
};

#endif // PERSON_H
