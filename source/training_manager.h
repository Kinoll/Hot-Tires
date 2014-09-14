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

private:
    void get_names();
    void get_riderTraining();
    void get_schemes();

    Ui::MainWindow *ui;

};

#endif // TRAINING_MANAGER_H
