#ifndef TRAINING_MANAGER_H
#define TRAINING_MANAGER_H

#include "ui_mainwindow.h"
//#include "mainwindow.h"

class training_manager :public QWidget
{
public:
    training_manager(Ui::MainWindow *lui);
    void refreshForm();
private slots:
    void on_pushButton_newScheme_clicked();

private:
    void get_names();
    void get_riderTraining();
    void new_scheme();

    Ui::MainWindow *ui;

};

#endif // TRAINING_MANAGER_H
