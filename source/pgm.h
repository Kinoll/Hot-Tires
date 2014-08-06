#ifndef PGM_H
#define PGM_H

#include <QVector>
#include <QString>
#include <QFile>
#include <QPixmap>

class pgm
{
public:
    pgm();
    QVector<QVector<int> > read(QString filename);
};

#endif // PGM_H
