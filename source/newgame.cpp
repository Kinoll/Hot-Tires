#include "newgame.h"
#include "ui_newgame.h"
#include "game.h"
#include "nation.h"
#include <iostream>
#include <QIcon>


newgame::newgame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newgame)
{
    ui->setupUi(this);
    setWindowTitle("New Game");
    for(int g=0;g<gamer.numb_of_nations;g++)
    {

    ui->country->insertItem(g,gamer.nations[g].icon,gamer.nations[g].nazwa);
}

}

newgame::~newgame()
{
    delete ui;
}

void newgame::on_buttonBox_accepted()
{
gamer.player.name=ui->name->text();
gamer.player.surname=ui->surname->text();
gamer.player.day=ui->birth->selectedDate().day();
gamer.player.month=ui->birth->selectedDate().month();
gamer.player.year=ui->birth->selectedDate().year();

}
