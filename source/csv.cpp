/*Klasa odpowiadajaca za odczytywanie i zapisywanie plików .csv*/
#include "csv.h"

QList<QStringList> csv::read(QString filename)
/*Metoda odpowiadajaca za odczyt pliku .csv*/
{
    QFile file;
    QString rowData;
    QList<QStringList> separated;
    rowOfData.clear();
    data.clear();
    file.setFileName(filename);
    if (file.open(QFile::ReadOnly))
    {
        data = file.readAll();
        rowOfData = data.split("\r\n");
        file.close();
    }
    while (!rowOfData.isEmpty())
    {
        rowData = rowOfData.takeFirst();
        separated.append(rowData.split(","));
    }
    return separated;

}
void csv::save(QString filename, QList<QStringList> someData)
/*Zapisuje liste do pliku .csv*/
{
    QFile file;
    dataToSave.clear();
    lines = someData;
    while (!lines.isEmpty())
    {
        line = lines.takeFirst();
        dataToSave.append(line.join(","));
        dataToSave.append("\n");
    }

    file.setFileName(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        out<<dataToSave;
        file.close();
    }
}
bool csv::exist(QString filename)
{
    QFile file;
    file.setFileName(filename);
    return file.exists();
}

