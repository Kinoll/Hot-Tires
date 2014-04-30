/*
Widget, w którym znajdzie się animacja.

Użycie, np. w main.cpp:

// &w jest adresem okienka głównego
draw_run run_widget(10, 10, 400, 300, &w);

@Marszal
*/

#ifndef DRAW_RUN_H
#define DRAW_RUN_H

#include <QWidget>
#include <QAction>
#include <QPainter>
#include <QMouseEvent>
#include <QMenu>

class draw_run : public QWidget
{
    Q_OBJECT

public:
    // w main.cpp: parent -> okienko
    draw_run(int x, int y, int width, int height, QWidget* parent = 0);
    ~draw_run();

protected:
    void paintEvent(QPaintEvent*);
    //void mousePressEvent(QMouseEvent*);
    //void mouseMoveEvent(QMouseEvent*);
    //void contextMenuEvent(QContextMenuEvent*);

private slots:

private:
    int _x, _y, _width, _height;
};

#endif // DRAW_RUN_H
