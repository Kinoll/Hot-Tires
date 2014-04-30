#ifndef CSV_H
#define CSV_H

#include <QStringList>
#include <QString>
#include <QFile>
#include <QList>
#include <QTextStream>

class csv
{
private:
    QString data;
    QStringList rowOfData;
    QList<QStringList> lines;
    QStringList line;
    QString dataToSave;
public:
    QList<QStringList> read(QString filename);
    void save(QString filename, QList<QStringList> someData);
    bool exist(QString filename);
};

#endif // CSV_H
