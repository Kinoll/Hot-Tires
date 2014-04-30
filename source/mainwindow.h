#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QComboBox>
#include <QPushButton>
#include "game.h"
#include "nation.h"
#include "nations.h"
#include "csv_read.h"
#include "heat.h"
#include "heat_rider.h"
#include <iostream>
#include <QVector>
#include <QProcess>
#include "time.h"
#include "csv.h"
#include "dmp.h"
#include "team.h"
#include "load_save.h"
#include "match.h"
//#include "event_game.h"
#include <iostream>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QList<QComboBox*> combos_a, combos_h, combos_heat;
    QVector< QVector<QPushButton*> > buttons_reserve;
    QStringList txt;
    event_game e;
    
private slots:
    void on_but_new_clicked();

    void on_but_load_clicked();

    void on_name_label_textChanged();

    void on_but_heat_clicked();

    void on_but_match_clicked();


    void on_but_team_apply_clicked();

    void on_pushButton_clicked();

    void on_but_continue_clicked();

    void fillDmp();

    void fillCurrentHeat(QString type, int players_team);

    void on_comboBox_rider1_currentIndexChanged(const QString &arg1);

    void on_pushButton_r_3_0_clicked();
    
    void on_pushButton_r_3_1_clicked();

    void on_pushButton_r_3_2_clicked();

    void on_pushButton_apply_changes_clicked();

    void on_pushButton_r_2_0_clicked();

    void on_pushButton_r_2_1_clicked();

    void on_pushButton_r_2_2_clicked();

    void on_pushButton_r_1_0_clicked();

    void on_pushButton_r_1_1_clicked();

    void on_pushButton_r_1_2_clicked();

    void on_pushButton_r_0_0_clicked();

    void on_pushButton_r_0_1_clicked();

    void on_pushButton_r_0_2_clicked();

    void on_pushButton_accept_nom_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
