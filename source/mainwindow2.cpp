#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newgame.h"
#include "game.h"
#include "nation.h"
#include "csv_read.h"
#include <iostream>
#include "nations.cpp"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Hot Tires");

    load_country();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_but_new_clicked()
{
   newgame *newg = new newgame;
   newg->exec();
   ui->tab_Manager->setEnabled(true);
   ui->tab_Mmain->setCurrentIndex(0);
   ui->tab_Manager->setCurrentIndex(0);
   std::string change2=gamer.player.name+" "+gamer.player.surname;
   QString change = QString::fromStdString(change2);
   ui->name_label->setText(change);




}

void MainWindow::on_but_load_clicked()
{
    ui->tab_Manager->setEnabled(true);
    ui->tab_Mmain->setCurrentIndex(0);
    ui->tab_Manager->setCurrentIndex(0);
}

void MainWindow::on_name_label_textChanged()
{

}
