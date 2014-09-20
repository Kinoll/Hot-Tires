#ifndef TRAINING_MANAGER_H
#define TRAINING_MANAGER_H

#include "ui_mainwindow.h"
//#include "mainwindow.h"

class training_manager
{
public:
    training_manager(Ui::MainWindow *lui);
    void refreshForm();
	void new_scheme(QString scheme_name);
    void delete_scheme(QString name);
    void load_scheme();
    void save_scheme();
    void load_training();
    void save_training();





private:
    void get_names();
    void get_riderTrainingTypes();
    void get_schemes();
    int getSelectedRiderNumber();
    void get_trainers();

    int getPersonByFullName(QString fullName);
    int getSchemeIdByName(QString name);
    int getTrainingDayId(int rider, int day);


    Ui::MainWindow *ui;

};

#endif // TRAINING_MANAGER_H
