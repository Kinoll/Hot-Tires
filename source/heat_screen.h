#ifndef HEAT_SCREEN_H
#define HEAT_SCREEN_H

#include <QWidget>
#include "database.h"
#include <QGraphicsView>
#include <QGraphicsScene>

namespace Ui {
class heat_screen;
}

class heat_screen : public QWidget
{
    Q_OBJECT

public:
    explicit heat_screen(QWidget *parent = 0);
    ~heat_screen();

private:
    Ui::heat_screen *ui;
};

#endif // HEAT_SCREEN_H
