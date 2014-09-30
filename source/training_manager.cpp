#include "training_manager.h"
#include "database.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QPushButton>
#include <QInputDialog>
#include <QLabel>
#include <QVBoxLayout>
#include "setcurrenttext.h"

training_manager::training_manager(Ui::MainWindow *lui)
{
    ui=lui;
}


void training_manager::get_names()
{
  int playerTeam=db.players_team_id;
  ui->comboBox_riderToTrain->clear();
  for (int c=0; c<=db.teams[playerTeam].persons.length()-1; c++)
      if (db.teams[playerTeam].persons[c]->is_rider>2)
      {
          ui->comboBox_riderToTrain->addItem(db.teams[playerTeam].persons[c]->name+" "+db.teams[playerTeam].persons[c]->surname);
      }
}

void training_manager::get_riderTrainingTypes()
{
    ui->comboBox_friday->clear();
    ui->comboBox_monday->clear();
    ui->comboBox_saturday->clear();
    ui->comboBox_sunday->clear();
    ui->comboBox_thursday->clear();
    ui->comboBox_tuesday->clear();
    ui->comboBox_wednesday->clear();
    for (int c=0; c<=db.training_schemes.size()-1; c++)
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

void training_manager::training_manager::get_trainers()
{
    ui->comboBox_coachFriday->clear();
    ui->comboBox_coachMonday->clear();
    ui->comboBox_coachSaturday->clear();
    ui->comboBox_coachSunday->clear();
    ui->comboBox_coachThursday->clear();
    ui->comboBox_coachTuesday->clear();
    ui->comboBox_coachWednesday->clear();
    int playerTeam=db.players_team_id;

    person* tmpPerson;
    for (int c=0; c<=db.teams[playerTeam].persons.length()-1; c++)
    {
        tmpPerson=db.teams[playerTeam].persons[c];
        if (tmpPerson->is_coach>2)
        {
            ui->comboBox_coachFriday->addItem(tmpPerson->name+" "+tmpPerson->surname);
            ui->comboBox_coachMonday->addItem(tmpPerson->name+" "+tmpPerson->surname);
            ui->comboBox_coachSaturday->addItem(tmpPerson->name+" "+tmpPerson->surname);
            ui->comboBox_coachSunday->addItem(tmpPerson->name+" "+tmpPerson->surname);
            ui->comboBox_coachThursday->addItem(tmpPerson->name+" "+tmpPerson->surname);
            ui->comboBox_coachTuesday->addItem(tmpPerson->name+" "+tmpPerson->surname);
            ui->comboBox_coachWednesday->addItem(tmpPerson->name+" "+tmpPerson->surname);
        }
    }

}

int training_manager::getSelectedRiderNumber()
{
    return(getPersonByFullName(ui->comboBox_riderToTrain->currentText()));
}



void training_manager::get_schemes()
{
    ui->comboBox_selectScheme->clear();
    for (int c=0; c<=db.training_schemes.size()-1; c++)
    {
        ui->comboBox_selectScheme->addItem(db.training_schemes[c].getName());
    }
}

void training_manager::new_scheme(QString scheme_name)
{
    QString schemeName = scheme_name;
    db.training_schemes.append(*(new training_scheme(schemeName)));
    ui->comboBox_selectScheme->addItem(schemeName);
    ui->slide_startReflex->setValue(0);
    ui->horizontalSlider_rideSteer->setValue(0);
    ui->horizontalSlider_teamRide->setValue(0);
    ui->horizontalSlider_trackExp->setValue(0);
    ui->horizontalSlider_psyche->setValue(0);
    ui->horizontalSlider_conditionStrength->setValue(0);
    refreshForm();
}

void training_manager::refreshForm()
{

     get_names();
     get_riderTrainingTypes();
     get_trainers();
     get_schemes();
     load_scheme();
//    ui->slide_startReflex->value()
  //  ui->slid

}

void training_manager::save_scheme()
{
    QString name=ui->comboBox_selectScheme->currentText();
    for (int c=0; c<=db.training_schemes.size()-1; c++)
    {
        if (db.training_schemes[c].getName()==name)
        {
            db.training_schemes[c].start_and_reflex_training=ui->slide_startReflex->value();
            db.training_schemes[c].condition_and_strength_training=ui->horizontalSlider_conditionStrength->value();
            db.training_schemes[c].psyche_training=ui->horizontalSlider_psyche->value();
            db.training_schemes[c].ride_and_steer_training=ui->horizontalSlider_rideSteer->value();
            db.training_schemes[c].team_ride_training=ui->horizontalSlider_teamRide->value();
            db.training_schemes[c].track_exp_training=ui->horizontalSlider_trackExp->value();

            break;
        }
    }
}

void training_manager::load_scheme()
{
//    QString name=ui->comboBox_selectScheme->itemData(ui->comboBox_selectScheme->currentIndex()).toString();
    QString name=ui->comboBox_selectScheme->currentText();
    for (int c=0; c<=db.training_schemes.size()-1; c++)
    {
        if (db.training_schemes[c].getName()==name)
        {
            ui->slide_startReflex->setValue(db.training_schemes[c].start_and_reflex_training);
            ui->horizontalSlider_conditionStrength->setValue(db.training_schemes[c].condition_and_strength_training);
            ui->horizontalSlider_psyche->setValue(db.training_schemes[c].psyche_training);
            ui->horizontalSlider_rideSteer->setValue(db.training_schemes[c].ride_and_steer_training);
            ui->horizontalSlider_teamRide->setValue(db.training_schemes[c].team_ride_training);
            ui->horizontalSlider_trackExp->setValue(db.training_schemes[c].track_exp_training);

            break;
        }
    }
}

void training_manager::delete_scheme(QString name)
{

   // QString name=ui->comboBox_selectScheme->itemData(ui->comboBox_selectScheme->currentIndex()).toString();
    for (int c=0; c<=db.training_schemes.size()-1; c++)
    {
        if (db.training_schemes[c].getName()==name)
        {
            db.training_schemes.remove(c);
            break;
        }
     }
     refreshForm();


}


int training_manager::getPersonByFullName(QString fullName)
{
    QStringList ls=fullName.split(" ");
    int result=-1;
    for (int c=0; c<=db.riders.length()-1; c++)
    {
        if (db.riders[c].name==ls[0] && db.riders[c].surname==ls[1])
        {
            result=c;
            break;
        }
    }
    return(result);

}

int training_manager::getSchemeIdByName(QString name)
{
    int result=-1;
    for (int c=0; c<=db.training_schemes.size()-1; c++)
    {
        if (db.training_schemes[c].getName()==name)
        {
            result=c;
            break;
        }
    }
    return(result);
}

int training_manager::getTrainingDayId(int rider, int day)
{
    int result=-1;
    for (int c=0; c<=db.training_days.size()-1; c++)
    {
        if (db.training_days[c].rider_id==rider && db.training_days[c].day_name==db.training_days[c].intToName(day))
        {
            result=c;
            break;
        }

    }
    return(result);
}

void training_manager::load_training()
{
    int rider=getPersonByFullName(ui->comboBox_riderToTrain->currentText());
    int coach[7];
    int scheme[7];
    for (int c=0; c<=6; c++)
    {
        int trdid=getTrainingDayId(rider,c);
        training_day* trd=&db.training_days[trdid];
        coach[c]=trd->coach;
        scheme[c]=trd->training_scheme;

    }
    setCurrentText(ui->comboBox_monday,db.training_schemes[scheme[0]].getName());
    setCurrentText(ui->comboBox_tuesday,db.training_schemes[scheme[1]].getName());
    setCurrentText(ui->comboBox_wednesday,db.training_schemes[scheme[2]].getName());
    setCurrentText(ui->comboBox_thursday,db.training_schemes[scheme[3]].getName());
    setCurrentText(ui->comboBox_friday,db.training_schemes[scheme[4]].getName());
    setCurrentText(ui->comboBox_saturday,db.training_schemes[scheme[5]].getName());
    setCurrentText(ui->comboBox_sunday,db.training_schemes[scheme[6]].getName());

    setCurrentText(ui->comboBox_coachMonday,db.riders[coach[0]].getName());
    setCurrentText(ui->comboBox_coachTuesday,db.riders[coach[1]].getName());
    setCurrentText(ui->comboBox_coachWednesday,db.riders[coach[2]].getName());
    setCurrentText(ui->comboBox_coachThursday,db.riders[coach[3]].getName());
    setCurrentText(ui->comboBox_coachFriday,db.riders[coach[4]].getName());
    setCurrentText(ui->comboBox_coachSaturday,db.riders[coach[5]].getName());
    setCurrentText(ui->comboBox_coachSunday,db.riders[coach[6]].getName());


}
void training_manager::save_training()
{

    int rider=getPersonByFullName(ui->comboBox_riderToTrain->currentText());
    int coach[7];
    int scheme[7];


    for (int c=0; c<=6; c++)
    {
        int trdid=getTrainingDayId(rider,c);
        training_day* trd=&db.training_days[trdid];
        coach[c]=trd->coach;
        scheme[c]=trd->training_scheme;

    }

    db.training_schemes[scheme[0]].setName(ui->comboBox_monday->currentText());
    db.training_schemes[scheme[1]].setName(ui->comboBox_tuesday->currentText());
    db.training_schemes[scheme[2]].setName(ui->comboBox_wednesday->currentText());
    db.training_schemes[scheme[3]].setName(ui->comboBox_thursday->currentText());
    db.training_schemes[scheme[4]].setName(ui->comboBox_friday->currentText());
    db.training_schemes[scheme[5]].setName(ui->comboBox_saturday->currentText());
    db.training_schemes[scheme[6]].setName(ui->comboBox_sunday->currentText());

    db.riders[coach[0]].setName(ui->comboBox_coachMonday->currentText());
    db.riders[coach[1]].setName(ui->comboBox_coachTuesday->currentText());
    db.riders[coach[2]].setName(ui->comboBox_coachWednesday->currentText());
    db.riders[coach[3]].setName(ui->comboBox_coachThursday->currentText());
    db.riders[coach[4]].setName(ui->comboBox_coachFriday->currentText());
    db.riders[coach[5]].setName(ui->comboBox_coachSaturday->currentText());
    db.riders[coach[6]].setName(ui->comboBox_coachSunday->currentText());






}





