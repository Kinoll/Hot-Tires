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
        data = data.mid(14,-1);
        file.close();
    }
    QStringList data_split;
    data_split = data.replace("\n", " ").split(" ");
    QVector< QVector<int> > pixmap(600, QVector<int>(800));
    int j = 0;
    for(int i = 0; i < 600; i++)
    {
        for(int k = 0; k < 800; k++)
        {
            pixmap[i][k] = data_split[j].toInt();
            j++;
        }
    }
    return pixmap;
}
