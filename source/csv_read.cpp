#include "csv_read.h"

/**Tworzymy obiekt jako argument podajac nazwe pliku, a metoda read() zwraca nam QStringList,
ktora zawiera odzielone przecinkami dane z jednej linijki pliku .csv.
Aby je wykorzystac nalezy w momencie tworzenia obiektow iterowac liste zwrocona
przez metode klasy i tworzyc z kazdego stringa liste danych.
Przyklad uzycia:

QStringList rowData, rowOfData;
csv_read reader("nations.csv");
rowOfData = reader.read()
for (int x = 0; x < rowOfData.size(); x++)
{
    rowData = rowOfData.at(x).split(","); //podzial linijki na liste danych
    //opcjonalnie mozna skorzsytac ze wskazania na konkretny index listy, dzieki temu, ze uzywamy typu QStringList,
    //np: rowData[index], ale mozna tez iterowac:
    for (int y = 0; y < rowData.size(); y++) //Tutaj nastepuje iteracja po kazdej danej z linjki
    {
        <tutaj wprowadz swoj kod>
    }
}
**/
QList<QStringList> csv_read::read()
{
    QString rowData;
    QList<QStringList> separated;
    rowOfData.clear();
    file.setFileName(m_fileName);
    if (file.open(QFile::ReadOnly))
    {
        data = file.readAll();
        rowOfData = data.split("\r\n");
        file.close();
    }
    while (true)
    {
    if (rowOfData.isEmpty()){break;}
    rowData = rowOfData.takeFirst();
    separated.append(rowData.split(","));
    }
    return separated;

}
void csv_read::save(QList<QStringList> allLines)
{
   lines = allLines;
   while (true)
   {
   if (lines.isEmpty()){break;}
   line = lines.takeFirst();
   dataToSave.append(line.join(","));
   dataToSave.append("\n");
   }

   file.setFileName(m_fileName);
   if (file.open(QIODevice::WriteOnly | QIODevice::Text))
   {
       QTextStream out(&file);
       out<<dataToSave;
       file.close();
   }
}

