#ifndef GAME_H
#define GAME_H
#include "manager.h"
#include "nation.h"
#include "rider.h"
#include "team.h"
#include "csv.h"
#include "rider_container.h"
#include "match.h"
#include "database.h"
//#include "event_game.h"
class game
{
public:
    game();
    void timeMove(database &d);
    csv CSV;
    manager player;
    nation *nations;
    int numb_of_nations;
};
extern game gamer;

#endif // GAME_H
