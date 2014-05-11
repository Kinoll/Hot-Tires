#include "pgm.h"

pgm::pgm()
{
}
QVector< QVector<int> > pgm::read(QString filename)
{
    QFile file;
    file.setFileName(filename);
    QString data;
    if(file.open(QFile::ReadOnly))
    {
        data = file.readAll();
        data = data.mid(14,-2);
        file.close();
    }
    QStringList data_split;
    data_split = data.replace("\n", " ").split(" ");
    QVector< QVector<int> > pixmap(800, QVector<int>(600));
    int j = 0;
    for(int i = 0; i < 800; i++)
    {
        for(int k = 0; k < 600; k++)
        {
            pixmap[i][k] = data_split[j].toInt();
            j++;
        }
    }
    return pixmap;
}
