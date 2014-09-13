#include "training_manager.h"
#include "database.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QPushButton>
#include <QInputDialog>
#include <QLabel>
#include <QVBoxLayout>


training_manager::training_manager(Ui::MainWindow *lui)
{
    ui=lui;
}


void training_manager::get_names()
{
  int playerTeam=db.players_team_id;
  ui->comboBox_riderToTrain->clear();
  for (int c=0; c<=db.teams[playerTeam].persons.length()-1; c++)
 //     if (db.teams[playerTeam].persons[c]->is_rider==true) //źle ustawione to pole, odkomentować gdy bug poprawiony!!!
      {
          ui->comboBox_riderToTrain->addItem(db.teams[playerTeam].persons[c]->name+" "+db.teams[playerTeam].persons[c]->surname);
      }
}

void training_manager::get_riderTraining()
{
    ui->comboBox_friday->clear();
    ui->comboBox_monday->clear();
    ui->comboBox_saturday->clear();
    ui->comboBox_sunday->clear();
    ui->comboBox_thursday->clear();
    ui->comboBox_tuesday->clear();
    ui->comboBox_wednesday->clear();
    for (int c=0; c<=db.training_schemes.length()-1; c++)
    {
        ui->comboBox_friday->addItem(db.training_schemes[c].getName());
        ui->comboBox_monday->addItem(db.training_schemes[c].getName());
        ui->comboBox_saturday->addItem(db.training_schemes[c].getName());
        ui->comboBox_sunday->addItem(db.training_schemes[c].getName());
        ui->comboBox_thursday->addItem(db.training_schemes[c].getName());
        ui->comboBox_tuesday->addItem(db.training_schemes[c].getName());
        ui->comboBox_wednesday->addItem(db.training_schemes[c].getName());

    }
}

void training_manager::new_scheme()
{
    bool ok;
    QString schemeName = QInputDialog::getText(this, QObject::tr("Podaj nazwę schematu"),QObject::tr("Nazwa schematu:"), QLineEdit::Normal,QObject::tr(""), &ok);
    db.training_schemes.append(*(new training_scheme(schemeName)));
    ui->comboBox_selectScheme->addItem(schemeName);
    ui->slide_startReflex->setValue(50);
    ui->horizontalSlider_rideSteer->setValue(0);
    ui->horizontalSlider_teamRide->setValue(0);
    ui->horizontalSlider_trackExp->setValue(0);
    ui->horizontalSlider_psyche->setValue(0);
    ui->horizontalSlider_conditionStrength->setValue(0);

}

void training_manager::refreshForm()
{

     get_names();
     get_riderTraining();

//    ui->slide_startReflex->value()
  //  ui->slid

}

void training_manager::on_pushButton_newScheme_clicked()
{
    new_scheme();
}
