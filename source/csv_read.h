#ifndef CSV_READ_H
#define CSV_READ_H

#include <QStringList>
#include <QString>
#include <QFile>
#include <QList>
#include <QTextStream>
class csv_read
{
private:
    QString m_fileName;
    QString data;
    QStringList rowOfData;
    QFile file;
    QList<QStringList> lines;
    QStringList line;
    QString dataToSave;
public:
    csv_read(QString fileName) {m_fileName = fileName;}
    QList<QStringList> read();
    void save(QList<QStringList> allLines);
};

#endif // CSV_READ_H
