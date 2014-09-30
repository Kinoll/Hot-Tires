/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tab_Mmain;
    QWidget *tab_MManager;
    QTabWidget *tab_Manager;
    QWidget *tab_messages;
    QWidget *tab_mailbox;
    QWidget *tab_offers;
    QWidget *tab_actions;
    QWidget *tab_search;
    QWidget *tab_CClub;
    QTabWidget *tab_Club;
    QWidget *tab_calendar;
    QWidget *tab_team;
    QWidget *tab_training;
    QGroupBox *group_riderTraining;
    QLabel *label_monday;
    QLabel *label_tuesday;
    QLabel *label_riderToTrain;
    QComboBox *comboBox_riderToTrain;
    QLabel *label_wednesday;
    QLabel *label_thursday;
    QLabel *label_friday;
    QLabel *label_saturday;
    QLabel *label_sunday;
    QComboBox *comboBox_monday;
    QComboBox *comboBox_tuesday;
    QComboBox *comboBox_wednesday;
    QComboBox *comboBox_thursday;
    QComboBox *comboBox_friday;
    QComboBox *comboBox_saturday;
    QComboBox *comboBox_sunday;
    QLabel *lbl_trainingDays;
    QLabel *label_coach;
    QComboBox *comboBox_coachMonday;
    QComboBox *comboBox_coachTuesday;
    QComboBox *comboBox_coachWednesday;
    QComboBox *comboBox_coachThursday;
    QComboBox *comboBox_coachFriday;
    QComboBox *comboBox_coachSaturday;
    QComboBox *comboBox_coachSunday;
    QGroupBox *groupBox_scheme;
    QComboBox *comboBox_selectScheme;
    QSlider *slide_startReflex;
    QSlider *horizontalSlider_rideSteer;
    QSlider *horizontalSlider_teamRide;
    QSlider *horizontalSlider_trackExp;
    QSlider *horizontalSlider_psyche;
    QSlider *horizontalSlider_conditionStrength;
    QLabel *label_startReflex;
    QLabel *label_rideSteer;
    QLabel *label_timeRide;
    QLabel *label_trackExp;
    QLabel *label_psyche;
    QLabel *label_conditionStrength;
    QLabel *label_selectScheme;
    QPushButton *pushButton_newScheme;
    QLabel *label_load;
    QLabel *label_loadValue;
    QPushButton *pushButton_del;
    QWidget *tab_workers;
    QWidget *tab_management;
    QWidget *tab_finances;
    QWidget *tab_teamMeeting;
    QWidget *tab_scouting;
    QWidget *tab_stadium;
    QWidget *tab_juniorSchool;
    QWidget *tab_infrastructure;
    QWidget *tab_history;
    QWidget *tab_bikes;
    QWidget *tab_MMatch;
    QTabWidget *tab_match_2;
    QWidget *tab_match;
    QComboBox *comboBox_rider1;
    QComboBox *comboBox_rider2;
    QComboBox *comboBox_rider3;
    QComboBox *comboBox_rider4;
    QTextBrowser *textBrowser_heatDisplay;
    QTextBrowser *textBrowser_pointsDisplay;
    QTextBrowser *textBrowser_gate1;
    QTextBrowser *textBrowser_gate2;
    QTextBrowser *textBrowser_gate3;
    QTextBrowser *textBrowser_gate4;
    QTextBrowser *textBrowser_matchHeader;
    QPushButton *pushButton;
    QPushButton *pushButton_r_0_0;
    QPushButton *pushButton_r_0_1;
    QPushButton *pushButton_r_0_2;
    QPushButton *pushButton_r_1_1;
    QPushButton *pushButton_r_1_0;
    QPushButton *pushButton_r_1_2;
    QPushButton *pushButton_r_2_1;
    QPushButton *pushButton_r_2_0;
    QPushButton *pushButton_r_3_1;
    QPushButton *pushButton_r_3_0;
    QPushButton *pushButton_r_2_2;
    QPushButton *pushButton_r_3_2;
    QPushButton *pushButton_apply_changes;
    QWidget *tab_prematch;
    QComboBox *comb_h0;
    QComboBox *comb_h1;
    QComboBox *comb_h2;
    QComboBox *comb_h5;
    QComboBox *comb_h3;
    QComboBox *comb_h4;
    QComboBox *comb_h6;
    QComboBox *comb_a6;
    QComboBox *comb_a0;
    QComboBox *comb_a3;
    QComboBox *comb_a5;
    QComboBox *comb_a2;
    QComboBox *comb_a1;
    QComboBox *comb_a4;
    QComboBox *comb_h7;
    QComboBox *comb_a7;
    QPushButton *but_team_apply;
    QWidget *tab_informations;
    QComboBox *comb_h14_1;
    QComboBox *comb_h14_2;
    QComboBox *comb_h15_1;
    QComboBox *comb_h15_2;
    QPushButton *pushButton_accept_nom;
    QWidget *tab_GGame;
    QTabWidget *tab_Game;
    QWidget *tab_gameNls;
    QPushButton *but_new;
    QPushButton *but_load;
    QPushButton *but_save;
    QWidget *tab_settings;
    QTextBrowser *name_label;
    QPushButton *but_continue;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1014, 607);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tab_Mmain = new QTabWidget(centralWidget);
        tab_Mmain->setObjectName(QString::fromUtf8("tab_Mmain"));
        tab_Mmain->setEnabled(true);
        tab_Mmain->setGeometry(QRect(10, 90, 1001, 481));
        tab_MManager = new QWidget();
        tab_MManager->setObjectName(QString::fromUtf8("tab_MManager"));
        tab_MManager->setEnabled(true);
        tab_Manager = new QTabWidget(tab_MManager);
        tab_Manager->setObjectName(QString::fromUtf8("tab_Manager"));
        tab_Manager->setEnabled(false);
        tab_Manager->setGeometry(QRect(0, 0, 1001, 461));
        tab_messages = new QWidget();
        tab_messages->setObjectName(QString::fromUtf8("tab_messages"));
        tab_Manager->addTab(tab_messages, QString());
        tab_mailbox = new QWidget();
        tab_mailbox->setObjectName(QString::fromUtf8("tab_mailbox"));
        tab_Manager->addTab(tab_mailbox, QString());
        tab_offers = new QWidget();
        tab_offers->setObjectName(QString::fromUtf8("tab_offers"));
        tab_Manager->addTab(tab_offers, QString());
        tab_actions = new QWidget();
        tab_actions->setObjectName(QString::fromUtf8("tab_actions"));
        tab_Manager->addTab(tab_actions, QString());
        tab_search = new QWidget();
        tab_search->setObjectName(QString::fromUtf8("tab_search"));
        tab_Manager->addTab(tab_search, QString());
        tab_Mmain->addTab(tab_MManager, QString());
        tab_CClub = new QWidget();
        tab_CClub->setObjectName(QString::fromUtf8("tab_CClub"));
        tab_CClub->setEnabled(false);
        tab_Club = new QTabWidget(tab_CClub);
        tab_Club->setObjectName(QString::fromUtf8("tab_Club"));
        tab_Club->setGeometry(QRect(20, 0, 1001, 561));
        tab_calendar = new QWidget();
        tab_calendar->setObjectName(QString::fromUtf8("tab_calendar"));
        tab_Club->addTab(tab_calendar, QString());
        tab_team = new QWidget();
        tab_team->setObjectName(QString::fromUtf8("tab_team"));
        tab_Club->addTab(tab_team, QString());
        tab_training = new QWidget();
        tab_training->setObjectName(QString::fromUtf8("tab_training"));
        group_riderTraining = new QGroupBox(tab_training);
        group_riderTraining->setObjectName(QString::fromUtf8("group_riderTraining"));
        group_riderTraining->setGeometry(QRect(40, 30, 381, 291));
        label_monday = new QLabel(group_riderTraining);
        label_monday->setObjectName(QString::fromUtf8("label_monday"));
        label_monday->setGeometry(QRect(10, 70, 71, 16));
        label_tuesday = new QLabel(group_riderTraining);
        label_tuesday->setObjectName(QString::fromUtf8("label_tuesday"));
        label_tuesday->setGeometry(QRect(10, 90, 46, 13));
        label_riderToTrain = new QLabel(group_riderTraining);
        label_riderToTrain->setObjectName(QString::fromUtf8("label_riderToTrain"));
        label_riderToTrain->setGeometry(QRect(10, 20, 91, 20));
        comboBox_riderToTrain = new QComboBox(group_riderTraining);
        comboBox_riderToTrain->setObjectName(QString::fromUtf8("comboBox_riderToTrain"));
        comboBox_riderToTrain->setGeometry(QRect(110, 20, 121, 22));
        label_wednesday = new QLabel(group_riderTraining);
        label_wednesday->setObjectName(QString::fromUtf8("label_wednesday"));
        label_wednesday->setGeometry(QRect(10, 110, 46, 13));
        label_thursday = new QLabel(group_riderTraining);
        label_thursday->setObjectName(QString::fromUtf8("label_thursday"));
        label_thursday->setGeometry(QRect(10, 130, 46, 13));
        label_friday = new QLabel(group_riderTraining);
        label_friday->setObjectName(QString::fromUtf8("label_friday"));
        label_friday->setGeometry(QRect(10, 150, 46, 13));
        label_saturday = new QLabel(group_riderTraining);
        label_saturday->setObjectName(QString::fromUtf8("label_saturday"));
        label_saturday->setGeometry(QRect(10, 170, 46, 13));
        label_sunday = new QLabel(group_riderTraining);
        label_sunday->setObjectName(QString::fromUtf8("label_sunday"));
        label_sunday->setGeometry(QRect(10, 190, 46, 13));
        comboBox_monday = new QComboBox(group_riderTraining);
        comboBox_monday->setObjectName(QString::fromUtf8("comboBox_monday"));
        comboBox_monday->setGeometry(QRect(80, 70, 131, 16));
        comboBox_tuesday = new QComboBox(group_riderTraining);
        comboBox_tuesday->setObjectName(QString::fromUtf8("comboBox_tuesday"));
        comboBox_tuesday->setGeometry(QRect(80, 90, 131, 16));
        comboBox_wednesday = new QComboBox(group_riderTraining);
        comboBox_wednesday->setObjectName(QString::fromUtf8("comboBox_wednesday"));
        comboBox_wednesday->setGeometry(QRect(80, 110, 131, 16));
        comboBox_thursday = new QComboBox(group_riderTraining);
        comboBox_thursday->setObjectName(QString::fromUtf8("comboBox_thursday"));
        comboBox_thursday->setGeometry(QRect(80, 130, 131, 16));
        comboBox_friday = new QComboBox(group_riderTraining);
        comboBox_friday->setObjectName(QString::fromUtf8("comboBox_friday"));
        comboBox_friday->setGeometry(QRect(80, 150, 131, 16));
        comboBox_saturday = new QComboBox(group_riderTraining);
        comboBox_saturday->setObjectName(QString::fromUtf8("comboBox_saturday"));
        comboBox_saturday->setGeometry(QRect(80, 170, 131, 16));
        comboBox_sunday = new QComboBox(group_riderTraining);
        comboBox_sunday->setObjectName(QString::fromUtf8("comboBox_sunday"));
        comboBox_sunday->setGeometry(QRect(80, 190, 131, 16));
        lbl_trainingDays = new QLabel(group_riderTraining);
        lbl_trainingDays->setObjectName(QString::fromUtf8("lbl_trainingDays"));
        lbl_trainingDays->setGeometry(QRect(10, 50, 111, 16));
        label_coach = new QLabel(group_riderTraining);
        label_coach->setObjectName(QString::fromUtf8("label_coach"));
        label_coach->setGeometry(QRect(260, 50, 46, 13));
        comboBox_coachMonday = new QComboBox(group_riderTraining);
        comboBox_coachMonday->setObjectName(QString::fromUtf8("comboBox_coachMonday"));
        comboBox_coachMonday->setGeometry(QRect(240, 70, 131, 16));
        comboBox_coachTuesday = new QComboBox(group_riderTraining);
        comboBox_coachTuesday->setObjectName(QString::fromUtf8("comboBox_coachTuesday"));
        comboBox_coachTuesday->setGeometry(QRect(240, 90, 131, 16));
        comboBox_coachWednesday = new QComboBox(group_riderTraining);
        comboBox_coachWednesday->setObjectName(QString::fromUtf8("comboBox_coachWednesday"));
        comboBox_coachWednesday->setGeometry(QRect(240, 110, 131, 16));
        comboBox_coachThursday = new QComboBox(group_riderTraining);
        comboBox_coachThursday->setObjectName(QString::fromUtf8("comboBox_coachThursday"));
        comboBox_coachThursday->setGeometry(QRect(240, 130, 131, 16));
        comboBox_coachFriday = new QComboBox(group_riderTraining);
        comboBox_coachFriday->setObjectName(QString::fromUtf8("comboBox_coachFriday"));
        comboBox_coachFriday->setGeometry(QRect(240, 150, 131, 16));
        comboBox_coachSaturday = new QComboBox(group_riderTraining);
        comboBox_coachSaturday->setObjectName(QString::fromUtf8("comboBox_coachSaturday"));
        comboBox_coachSaturday->setGeometry(QRect(240, 170, 131, 16));
        comboBox_coachSunday = new QComboBox(group_riderTraining);
        comboBox_coachSunday->setObjectName(QString::fromUtf8("comboBox_coachSunday"));
        comboBox_coachSunday->setGeometry(QRect(240, 190, 131, 16));
        groupBox_scheme = new QGroupBox(tab_training);
        groupBox_scheme->setObjectName(QString::fromUtf8("groupBox_scheme"));
        groupBox_scheme->setGeometry(QRect(460, 40, 471, 281));
        comboBox_selectScheme = new QComboBox(groupBox_scheme);
        comboBox_selectScheme->setObjectName(QString::fromUtf8("comboBox_selectScheme"));
        comboBox_selectScheme->setGeometry(QRect(110, 30, 111, 22));
        slide_startReflex = new QSlider(groupBox_scheme);
        slide_startReflex->setObjectName(QString::fromUtf8("slide_startReflex"));
        slide_startReflex->setGeometry(QRect(200, 70, 160, 22));
        slide_startReflex->setOrientation(Qt::Horizontal);
        horizontalSlider_rideSteer = new QSlider(groupBox_scheme);
        horizontalSlider_rideSteer->setObjectName(QString::fromUtf8("horizontalSlider_rideSteer"));
        horizontalSlider_rideSteer->setGeometry(QRect(200, 100, 160, 22));
        horizontalSlider_rideSteer->setOrientation(Qt::Horizontal);
        horizontalSlider_teamRide = new QSlider(groupBox_scheme);
        horizontalSlider_teamRide->setObjectName(QString::fromUtf8("horizontalSlider_teamRide"));
        horizontalSlider_teamRide->setGeometry(QRect(200, 130, 160, 22));
        horizontalSlider_teamRide->setOrientation(Qt::Horizontal);
        horizontalSlider_trackExp = new QSlider(groupBox_scheme);
        horizontalSlider_trackExp->setObjectName(QString::fromUtf8("horizontalSlider_trackExp"));
        horizontalSlider_trackExp->setGeometry(QRect(200, 160, 160, 22));
        horizontalSlider_trackExp->setOrientation(Qt::Horizontal);
        horizontalSlider_psyche = new QSlider(groupBox_scheme);
        horizontalSlider_psyche->setObjectName(QString::fromUtf8("horizontalSlider_psyche"));
        horizontalSlider_psyche->setGeometry(QRect(200, 190, 160, 22));
        horizontalSlider_psyche->setOrientation(Qt::Horizontal);
        horizontalSlider_conditionStrength = new QSlider(groupBox_scheme);
        horizontalSlider_conditionStrength->setObjectName(QString::fromUtf8("horizontalSlider_conditionStrength"));
        horizontalSlider_conditionStrength->setGeometry(QRect(200, 220, 160, 22));
        horizontalSlider_conditionStrength->setOrientation(Qt::Horizontal);
        label_startReflex = new QLabel(groupBox_scheme);
        label_startReflex->setObjectName(QString::fromUtf8("label_startReflex"));
        label_startReflex->setGeometry(QRect(10, 70, 81, 16));
        label_rideSteer = new QLabel(groupBox_scheme);
        label_rideSteer->setObjectName(QString::fromUtf8("label_rideSteer"));
        label_rideSteer->setGeometry(QRect(10, 100, 71, 16));
        label_timeRide = new QLabel(groupBox_scheme);
        label_timeRide->setObjectName(QString::fromUtf8("label_timeRide"));
        label_timeRide->setGeometry(QRect(10, 130, 71, 16));
        label_trackExp = new QLabel(groupBox_scheme);
        label_trackExp->setObjectName(QString::fromUtf8("label_trackExp"));
        label_trackExp->setGeometry(QRect(10, 160, 181, 16));
        label_psyche = new QLabel(groupBox_scheme);
        label_psyche->setObjectName(QString::fromUtf8("label_psyche"));
        label_psyche->setGeometry(QRect(10, 190, 46, 13));
        label_conditionStrength = new QLabel(groupBox_scheme);
        label_conditionStrength->setObjectName(QString::fromUtf8("label_conditionStrength"));
        label_conditionStrength->setGeometry(QRect(10, 220, 101, 16));
        label_selectScheme = new QLabel(groupBox_scheme);
        label_selectScheme->setObjectName(QString::fromUtf8("label_selectScheme"));
        label_selectScheme->setGeometry(QRect(10, 30, 101, 20));
        pushButton_newScheme = new QPushButton(groupBox_scheme);
        pushButton_newScheme->setObjectName(QString::fromUtf8("pushButton_newScheme"));
        pushButton_newScheme->setGeometry(QRect(230, 30, 101, 23));
        label_load = new QLabel(groupBox_scheme);
        label_load->setObjectName(QString::fromUtf8("label_load"));
        label_load->setGeometry(QRect(10, 260, 61, 16));
        label_loadValue = new QLabel(groupBox_scheme);
        label_loadValue->setObjectName(QString::fromUtf8("label_loadValue"));
        label_loadValue->setGeometry(QRect(80, 260, 46, 13));
        pushButton_del = new QPushButton(groupBox_scheme);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(350, 30, 91, 23));
        tab_Club->addTab(tab_training, QString());
        tab_workers = new QWidget();
        tab_workers->setObjectName(QString::fromUtf8("tab_workers"));
        tab_Club->addTab(tab_workers, QString());
        tab_management = new QWidget();
        tab_management->setObjectName(QString::fromUtf8("tab_management"));
        tab_Club->addTab(tab_management, QString());
        tab_finances = new QWidget();
        tab_finances->setObjectName(QString::fromUtf8("tab_finances"));
        tab_Club->addTab(tab_finances, QString());
        tab_teamMeeting = new QWidget();
        tab_teamMeeting->setObjectName(QString::fromUtf8("tab_teamMeeting"));
        tab_Club->addTab(tab_teamMeeting, QString());
        tab_scouting = new QWidget();
        tab_scouting->setObjectName(QString::fromUtf8("tab_scouting"));
        tab_Club->addTab(tab_scouting, QString());
        tab_stadium = new QWidget();
        tab_stadium->setObjectName(QString::fromUtf8("tab_stadium"));
        tab_Club->addTab(tab_stadium, QString());
        tab_juniorSchool = new QWidget();
        tab_juniorSchool->setObjectName(QString::fromUtf8("tab_juniorSchool"));
        tab_Club->addTab(tab_juniorSchool, QString());
        tab_infrastructure = new QWidget();
        tab_infrastructure->setObjectName(QString::fromUtf8("tab_infrastructure"));
        tab_Club->addTab(tab_infrastructure, QString());
        tab_history = new QWidget();
        tab_history->setObjectName(QString::fromUtf8("tab_history"));
        tab_Club->addTab(tab_history, QString());
        tab_bikes = new QWidget();
        tab_bikes->setObjectName(QString::fromUtf8("tab_bikes"));
        tab_Club->addTab(tab_bikes, QString());
        tab_Mmain->addTab(tab_CClub, QString());
        tab_MMatch = new QWidget();
        tab_MMatch->setObjectName(QString::fromUtf8("tab_MMatch"));
        tab_match_2 = new QTabWidget(tab_MMatch);
        tab_match_2->setObjectName(QString::fromUtf8("tab_match_2"));
        tab_match_2->setGeometry(QRect(0, 0, 1041, 471));
        tab_match = new QWidget();
        tab_match->setObjectName(QString::fromUtf8("tab_match"));
        comboBox_rider1 = new QComboBox(tab_match);
        comboBox_rider1->setObjectName(QString::fromUtf8("comboBox_rider1"));
        comboBox_rider1->setGeometry(QRect(20, 50, 301, 22));
        comboBox_rider2 = new QComboBox(tab_match);
        comboBox_rider2->setObjectName(QString::fromUtf8("comboBox_rider2"));
        comboBox_rider2->setGeometry(QRect(20, 70, 301, 22));
        comboBox_rider3 = new QComboBox(tab_match);
        comboBox_rider3->setObjectName(QString::fromUtf8("comboBox_rider3"));
        comboBox_rider3->setGeometry(QRect(20, 90, 301, 22));
        comboBox_rider4 = new QComboBox(tab_match);
        comboBox_rider4->setObjectName(QString::fromUtf8("comboBox_rider4"));
        comboBox_rider4->setGeometry(QRect(20, 110, 301, 22));
        textBrowser_heatDisplay = new QTextBrowser(tab_match);
        textBrowser_heatDisplay->setObjectName(QString::fromUtf8("textBrowser_heatDisplay"));
        textBrowser_heatDisplay->setGeometry(QRect(20, 180, 431, 111));
        textBrowser_pointsDisplay = new QTextBrowser(tab_match);
        textBrowser_pointsDisplay->setObjectName(QString::fromUtf8("textBrowser_pointsDisplay"));
        textBrowser_pointsDisplay->setGeometry(QRect(480, 10, 371, 411));
        textBrowser_gate1 = new QTextBrowser(tab_match);
        textBrowser_gate1->setObjectName(QString::fromUtf8("textBrowser_gate1"));
        textBrowser_gate1->setGeometry(QRect(330, 50, 16, 21));
        textBrowser_gate1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate2 = new QTextBrowser(tab_match);
        textBrowser_gate2->setObjectName(QString::fromUtf8("textBrowser_gate2"));
        textBrowser_gate2->setGeometry(QRect(330, 70, 16, 21));
        textBrowser_gate2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate3 = new QTextBrowser(tab_match);
        textBrowser_gate3->setObjectName(QString::fromUtf8("textBrowser_gate3"));
        textBrowser_gate3->setGeometry(QRect(330, 90, 16, 21));
        textBrowser_gate3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate4 = new QTextBrowser(tab_match);
        textBrowser_gate4->setObjectName(QString::fromUtf8("textBrowser_gate4"));
        textBrowser_gate4->setGeometry(QRect(330, 110, 16, 21));
        textBrowser_gate4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_matchHeader = new QTextBrowser(tab_match);
        textBrowser_matchHeader->setObjectName(QString::fromUtf8("textBrowser_matchHeader"));
        textBrowser_matchHeader->setGeometry(QRect(20, 10, 431, 31));
        pushButton = new QPushButton(tab_match);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 330, 101, 23));
        pushButton_r_0_0 = new QPushButton(tab_match);
        pushButton_r_0_0->setObjectName(QString::fromUtf8("pushButton_r_0_0"));
        pushButton_r_0_0->setGeometry(QRect(360, 50, 31, 23));
        pushButton_r_0_1 = new QPushButton(tab_match);
        pushButton_r_0_1->setObjectName(QString::fromUtf8("pushButton_r_0_1"));
        pushButton_r_0_1->setGeometry(QRect(390, 50, 31, 23));
        pushButton_r_0_2 = new QPushButton(tab_match);
        pushButton_r_0_2->setObjectName(QString::fromUtf8("pushButton_r_0_2"));
        pushButton_r_0_2->setGeometry(QRect(420, 50, 31, 23));
        pushButton_r_1_1 = new QPushButton(tab_match);
        pushButton_r_1_1->setObjectName(QString::fromUtf8("pushButton_r_1_1"));
        pushButton_r_1_1->setGeometry(QRect(390, 70, 31, 23));
        pushButton_r_1_0 = new QPushButton(tab_match);
        pushButton_r_1_0->setObjectName(QString::fromUtf8("pushButton_r_1_0"));
        pushButton_r_1_0->setGeometry(QRect(360, 70, 31, 23));
        pushButton_r_1_2 = new QPushButton(tab_match);
        pushButton_r_1_2->setObjectName(QString::fromUtf8("pushButton_r_1_2"));
        pushButton_r_1_2->setGeometry(QRect(420, 70, 31, 23));
        pushButton_r_2_1 = new QPushButton(tab_match);
        pushButton_r_2_1->setObjectName(QString::fromUtf8("pushButton_r_2_1"));
        pushButton_r_2_1->setGeometry(QRect(390, 90, 31, 23));
        pushButton_r_2_0 = new QPushButton(tab_match);
        pushButton_r_2_0->setObjectName(QString::fromUtf8("pushButton_r_2_0"));
        pushButton_r_2_0->setGeometry(QRect(360, 90, 31, 23));
        pushButton_r_3_1 = new QPushButton(tab_match);
        pushButton_r_3_1->setObjectName(QString::fromUtf8("pushButton_r_3_1"));
        pushButton_r_3_1->setGeometry(QRect(390, 110, 31, 23));
        pushButton_r_3_0 = new QPushButton(tab_match);
        pushButton_r_3_0->setObjectName(QString::fromUtf8("pushButton_r_3_0"));
        pushButton_r_3_0->setGeometry(QRect(360, 110, 31, 23));
        pushButton_r_2_2 = new QPushButton(tab_match);
        pushButton_r_2_2->setObjectName(QString::fromUtf8("pushButton_r_2_2"));
        pushButton_r_2_2->setGeometry(QRect(420, 90, 31, 23));
        pushButton_r_3_2 = new QPushButton(tab_match);
        pushButton_r_3_2->setObjectName(QString::fromUtf8("pushButton_r_3_2"));
        pushButton_r_3_2->setGeometry(QRect(420, 110, 31, 23));
        pushButton_apply_changes = new QPushButton(tab_match);
        pushButton_apply_changes->setObjectName(QString::fromUtf8("pushButton_apply_changes"));
        pushButton_apply_changes->setGeometry(QRect(360, 140, 91, 23));
        tab_match_2->addTab(tab_match, QString());
        tab_prematch = new QWidget();
        tab_prematch->setObjectName(QString::fromUtf8("tab_prematch"));
        comb_h0 = new QComboBox(tab_prematch);
        comb_h0->setObjectName(QString::fromUtf8("comb_h0"));
        comb_h0->setGeometry(QRect(30, 20, 231, 22));
        comb_h1 = new QComboBox(tab_prematch);
        comb_h1->setObjectName(QString::fromUtf8("comb_h1"));
        comb_h1->setGeometry(QRect(30, 50, 231, 22));
        comb_h2 = new QComboBox(tab_prematch);
        comb_h2->setObjectName(QString::fromUtf8("comb_h2"));
        comb_h2->setGeometry(QRect(30, 80, 231, 22));
        comb_h5 = new QComboBox(tab_prematch);
        comb_h5->setObjectName(QString::fromUtf8("comb_h5"));
        comb_h5->setGeometry(QRect(30, 170, 231, 22));
        comb_h3 = new QComboBox(tab_prematch);
        comb_h3->setObjectName(QString::fromUtf8("comb_h3"));
        comb_h3->setGeometry(QRect(30, 110, 231, 22));
        comb_h4 = new QComboBox(tab_prematch);
        comb_h4->setObjectName(QString::fromUtf8("comb_h4"));
        comb_h4->setGeometry(QRect(30, 140, 231, 22));
        comb_h6 = new QComboBox(tab_prematch);
        comb_h6->setObjectName(QString::fromUtf8("comb_h6"));
        comb_h6->setGeometry(QRect(30, 200, 231, 22));
        comb_a6 = new QComboBox(tab_prematch);
        comb_a6->setObjectName(QString::fromUtf8("comb_a6"));
        comb_a6->setGeometry(QRect(520, 200, 231, 22));
        comb_a0 = new QComboBox(tab_prematch);
        comb_a0->setObjectName(QString::fromUtf8("comb_a0"));
        comb_a0->setGeometry(QRect(520, 20, 231, 22));
        comb_a3 = new QComboBox(tab_prematch);
        comb_a3->setObjectName(QString::fromUtf8("comb_a3"));
        comb_a3->setGeometry(QRect(520, 110, 231, 22));
        comb_a5 = new QComboBox(tab_prematch);
        comb_a5->setObjectName(QString::fromUtf8("comb_a5"));
        comb_a5->setGeometry(QRect(520, 170, 231, 22));
        comb_a2 = new QComboBox(tab_prematch);
        comb_a2->setObjectName(QString::fromUtf8("comb_a2"));
        comb_a2->setGeometry(QRect(520, 80, 231, 22));
        comb_a1 = new QComboBox(tab_prematch);
        comb_a1->setObjectName(QString::fromUtf8("comb_a1"));
        comb_a1->setGeometry(QRect(520, 50, 231, 22));
        comb_a4 = new QComboBox(tab_prematch);
        comb_a4->setObjectName(QString::fromUtf8("comb_a4"));
        comb_a4->setGeometry(QRect(520, 140, 231, 22));
        comb_h7 = new QComboBox(tab_prematch);
        comb_h7->setObjectName(QString::fromUtf8("comb_h7"));
        comb_h7->setGeometry(QRect(30, 230, 231, 22));
        comb_a7 = new QComboBox(tab_prematch);
        comb_a7->setObjectName(QString::fromUtf8("comb_a7"));
        comb_a7->setGeometry(QRect(520, 230, 231, 22));
        but_team_apply = new QPushButton(tab_prematch);
        but_team_apply->setObjectName(QString::fromUtf8("but_team_apply"));
        but_team_apply->setGeometry(QRect(30, 300, 75, 23));
        tab_match_2->addTab(tab_prematch, QString());
        tab_informations = new QWidget();
        tab_informations->setObjectName(QString::fromUtf8("tab_informations"));
        comb_h14_1 = new QComboBox(tab_informations);
        comb_h14_1->setObjectName(QString::fromUtf8("comb_h14_1"));
        comb_h14_1->setGeometry(QRect(10, 40, 251, 22));
        comb_h14_2 = new QComboBox(tab_informations);
        comb_h14_2->setObjectName(QString::fromUtf8("comb_h14_2"));
        comb_h14_2->setGeometry(QRect(10, 70, 251, 22));
        comb_h15_1 = new QComboBox(tab_informations);
        comb_h15_1->setObjectName(QString::fromUtf8("comb_h15_1"));
        comb_h15_1->setGeometry(QRect(10, 140, 251, 22));
        comb_h15_2 = new QComboBox(tab_informations);
        comb_h15_2->setObjectName(QString::fromUtf8("comb_h15_2"));
        comb_h15_2->setGeometry(QRect(10, 170, 251, 22));
        pushButton_accept_nom = new QPushButton(tab_informations);
        pushButton_accept_nom->setObjectName(QString::fromUtf8("pushButton_accept_nom"));
        pushButton_accept_nom->setGeometry(QRect(60, 220, 201, 23));
        tab_match_2->addTab(tab_informations, QString());
        tab_Mmain->addTab(tab_MMatch, QString());
        tab_GGame = new QWidget();
        tab_GGame->setObjectName(QString::fromUtf8("tab_GGame"));
        tab_Game = new QTabWidget(tab_GGame);
        tab_Game->setObjectName(QString::fromUtf8("tab_Game"));
        tab_Game->setGeometry(QRect(0, 0, 991, 551));
        tab_gameNls = new QWidget();
        tab_gameNls->setObjectName(QString::fromUtf8("tab_gameNls"));
        but_new = new QPushButton(tab_gameNls);
        but_new->setObjectName(QString::fromUtf8("but_new"));
        but_new->setGeometry(QRect(30, 20, 81, 23));
        but_load = new QPushButton(tab_gameNls);
        but_load->setObjectName(QString::fromUtf8("but_load"));
        but_load->setGeometry(QRect(30, 100, 81, 21));
        but_save = new QPushButton(tab_gameNls);
        but_save->setObjectName(QString::fromUtf8("but_save"));
        but_save->setGeometry(QRect(30, 130, 81, 21));
        tab_Game->addTab(tab_gameNls, QString());
        tab_settings = new QWidget();
        tab_settings->setObjectName(QString::fromUtf8("tab_settings"));
        tab_Game->addTab(tab_settings, QString());
        tab_Mmain->addTab(tab_GGame, QString());
        name_label = new QTextBrowser(centralWidget);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(20, 20, 341, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        name_label->setFont(font);
        but_continue = new QPushButton(centralWidget);
        but_continue->setObjectName(QString::fromUtf8("but_continue"));
        but_continue->setGeometry(QRect(864, 20, 111, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1014, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tab_Mmain->setCurrentIndex(1);
        tab_Manager->setCurrentIndex(0);
        tab_Club->setCurrentIndex(2);
        tab_match_2->setCurrentIndex(0);
        tab_Game->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_messages), QApplication::translate("MainWindow", "Wiadomosci", 0, QApplication::UnicodeUTF8));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_mailbox), QApplication::translate("MainWindow", "Skrzynka", 0, QApplication::UnicodeUTF8));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_offers), QApplication::translate("MainWindow", "Oferty", 0, QApplication::UnicodeUTF8));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_actions), QApplication::translate("MainWindow", "Akcje", 0, QApplication::UnicodeUTF8));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_search), QApplication::translate("MainWindow", "Szukaj", 0, QApplication::UnicodeUTF8));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_MManager), QApplication::translate("MainWindow", "Manager", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_calendar), QApplication::translate("MainWindow", "Terminarz", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_team), QApplication::translate("MainWindow", "Kadra", 0, QApplication::UnicodeUTF8));
        group_riderTraining->setTitle(QApplication::translate("MainWindow", "Treningi zawodnik\303\263w:", 0, QApplication::UnicodeUTF8));
        label_monday->setText(QApplication::translate("MainWindow", "Poniedzia\305\202ek:", 0, QApplication::UnicodeUTF8));
        label_tuesday->setText(QApplication::translate("MainWindow", "Wtorek:", 0, QApplication::UnicodeUTF8));
        label_riderToTrain->setText(QApplication::translate("MainWindow", "Wybierz zawodnika:", 0, QApplication::UnicodeUTF8));
        label_wednesday->setText(QApplication::translate("MainWindow", "\305\232roda:", 0, QApplication::UnicodeUTF8));
        label_thursday->setText(QApplication::translate("MainWindow", "Czwartek:", 0, QApplication::UnicodeUTF8));
        label_friday->setText(QApplication::translate("MainWindow", "Pi\304\205tek:", 0, QApplication::UnicodeUTF8));
        label_saturday->setText(QApplication::translate("MainWindow", "Sobota:", 0, QApplication::UnicodeUTF8));
        label_sunday->setText(QApplication::translate("MainWindow", "Niedziela:", 0, QApplication::UnicodeUTF8));
        lbl_trainingDays->setText(QApplication::translate("MainWindow", "Dni trening\303\263w:", 0, QApplication::UnicodeUTF8));
        label_coach->setText(QApplication::translate("MainWindow", "Trenerzy:", 0, QApplication::UnicodeUTF8));
        groupBox_scheme->setTitle(QApplication::translate("MainWindow", "Edycja schemat\303\263w treningowych:", 0, QApplication::UnicodeUTF8));
        label_startReflex->setText(QApplication::translate("MainWindow", "Start i refleks:", 0, QApplication::UnicodeUTF8));
        label_rideSteer->setText(QApplication::translate("MainWindow", "Jazda i skr\304\231t:", 0, QApplication::UnicodeUTF8));
        label_timeRide->setText(QApplication::translate("MainWindow", "Jazda par\304\205:", 0, QApplication::UnicodeUTF8));
        label_trackExp->setText(QApplication::translate("MainWindow", "Poznanie toru najbli\305\274szych zawod\303\263w:", 0, QApplication::UnicodeUTF8));
        label_psyche->setText(QApplication::translate("MainWindow", "Psychika:", 0, QApplication::UnicodeUTF8));
        label_conditionStrength->setText(QApplication::translate("MainWindow", "Si\305\202a i kondycja:", 0, QApplication::UnicodeUTF8));
        label_selectScheme->setText(QApplication::translate("MainWindow", "Wybierz schemat:", 0, QApplication::UnicodeUTF8));
        pushButton_newScheme->setText(QApplication::translate("MainWindow", "Nowy schemat...", 0, QApplication::UnicodeUTF8));
        label_load->setText(QApplication::translate("MainWindow", "Obci\304\205\305\274enie:", 0, QApplication::UnicodeUTF8));
        label_loadValue->setText(QApplication::translate("MainWindow", "0%", 0, QApplication::UnicodeUTF8));
        pushButton_del->setText(QApplication::translate("MainWindow", "Kasuj schemat.", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_training), QApplication::translate("MainWindow", "Trening", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_workers), QApplication::translate("MainWindow", "Sztab", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_management), QApplication::translate("MainWindow", "Zarzad", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_finances), QApplication::translate("MainWindow", "Finanse", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_teamMeeting), QApplication::translate("MainWindow", "Zebranie", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_scouting), QApplication::translate("MainWindow", "Obserwacje", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_stadium), QApplication::translate("MainWindow", "Stadion", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_juniorSchool), QApplication::translate("MainWindow", "Szkolka", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_infrastructure), QApplication::translate("MainWindow", "Infrastruktura", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_history), QApplication::translate("MainWindow", "Historia", 0, QApplication::UnicodeUTF8));
        tab_Club->setTabText(tab_Club->indexOf(tab_bikes), QApplication::translate("MainWindow", "Park Maszyn", 0, QApplication::UnicodeUTF8));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_CClub), QApplication::translate("MainWindow", "Klub", 0, QApplication::UnicodeUTF8));
        textBrowser_gate1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ff0000;\">A</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_gate2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0000ff;\">B</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_gate3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#d3d3d3;\">C</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textBrowser_gate4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffff00;\">D</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Nastepny bieg", 0, QApplication::UnicodeUTF8));
        pushButton_r_0_0->setText(QApplication::translate("MainWindow", "r. z.", 0, QApplication::UnicodeUTF8));
        pushButton_r_0_1->setText(QApplication::translate("MainWindow", "r. t.", 0, QApplication::UnicodeUTF8));
        pushButton_r_0_2->setText(QApplication::translate("MainWindow", "z. z.", 0, QApplication::UnicodeUTF8));
        pushButton_r_1_1->setText(QApplication::translate("MainWindow", "r. t.", 0, QApplication::UnicodeUTF8));
        pushButton_r_1_0->setText(QApplication::translate("MainWindow", "r. z.", 0, QApplication::UnicodeUTF8));
        pushButton_r_1_2->setText(QApplication::translate("MainWindow", "z. z.", 0, QApplication::UnicodeUTF8));
        pushButton_r_2_1->setText(QApplication::translate("MainWindow", "r. t.", 0, QApplication::UnicodeUTF8));
        pushButton_r_2_0->setText(QApplication::translate("MainWindow", "r. z.", 0, QApplication::UnicodeUTF8));
        pushButton_r_3_1->setText(QApplication::translate("MainWindow", "r. t.", 0, QApplication::UnicodeUTF8));
        pushButton_r_3_0->setText(QApplication::translate("MainWindow", "r. z.", 0, QApplication::UnicodeUTF8));
        pushButton_r_2_2->setText(QApplication::translate("MainWindow", "z. z.", 0, QApplication::UnicodeUTF8));
        pushButton_r_3_2->setText(QApplication::translate("MainWindow", "z. z.", 0, QApplication::UnicodeUTF8));
        pushButton_apply_changes->setText(QApplication::translate("MainWindow", "Zatwierd\305\272 zmiany", 0, QApplication::UnicodeUTF8));
        tab_match_2->setTabText(tab_match_2->indexOf(tab_match), QApplication::translate("MainWindow", "Zawody", 0, QApplication::UnicodeUTF8));
        but_team_apply->setText(QApplication::translate("MainWindow", "Zatwierdz", 0, QApplication::UnicodeUTF8));
        tab_match_2->setTabText(tab_match_2->indexOf(tab_prematch), QApplication::translate("MainWindow", "Ekran Przedmeczowy", 0, QApplication::UnicodeUTF8));
        pushButton_accept_nom->setText(QApplication::translate("MainWindow", "Akceptuj sk\305\202ad bieg\303\263w nominowanych", 0, QApplication::UnicodeUTF8));
        tab_match_2->setTabText(tab_match_2->indexOf(tab_informations), QApplication::translate("MainWindow", "Informacje", 0, QApplication::UnicodeUTF8));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_MMatch), QApplication::translate("MainWindow", "Zawody", 0, QApplication::UnicodeUTF8));
        but_new->setText(QApplication::translate("MainWindow", "Nowa Gra", 0, QApplication::UnicodeUTF8));
        but_load->setText(QApplication::translate("MainWindow", "Wczytaj", 0, QApplication::UnicodeUTF8));
        but_save->setText(QApplication::translate("MainWindow", "Zapisz", 0, QApplication::UnicodeUTF8));
        tab_Game->setTabText(tab_Game->indexOf(tab_gameNls), QApplication::translate("MainWindow", "Gra...", 0, QApplication::UnicodeUTF8));
        tab_Game->setTabText(tab_Game->indexOf(tab_settings), QApplication::translate("MainWindow", "Ustawienia", 0, QApplication::UnicodeUTF8));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_GGame), QApplication::translate("MainWindow", "Gra", 0, QApplication::UnicodeUTF8));
        but_continue->setText(QApplication::translate("MainWindow", "Kontynuuj", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
