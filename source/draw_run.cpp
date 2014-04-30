/*
Widget, w którym znajdzie się animacja.

Tutaj znajdzie się implementacja.

@Marszal
*/

#include "draw_run.h"

draw_run::draw_run(int x, int y, int width, int height, QWidget* parent)
    : _x(x), _y(y), _width(width), _height(height), QWidget(parent)\
{
    setGeometry(_x, _y, _width, _height);
}

draw_run::~draw_run() {}

void draw_run::paintEvent(QPaintEvent* e)
{
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 25));
    painter.drawText(rect(), Qt::AlignCenter, "Tutaj będzie animacja");
    painter.drawRect(_x, _y, _width - 15, _height - 15);

    update();
}

//void draw_run::mousePressEvent(QMouseEvent* e)        {}
//void draw_run::mouseMoveEvent(QMouseEvent* e)         {}
//void draw_run::contextMenuEvent(QContextMenuEvent* e) {}
