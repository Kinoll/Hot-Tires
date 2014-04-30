#ifndef EVENT_GAME_H
#define EVENT_GAME_H
#include <QDate>
//#include "mainwindow.h"

class event_game
{
public:
    event_game();
    QString event_type;
    QDate date;
    virtual ~event_game(){;}

};

#endif // EVENT_GAME_H
