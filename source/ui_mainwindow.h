/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1014, 607);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tab_Mmain = new QTabWidget(centralWidget);
        tab_Mmain->setObjectName(QStringLiteral("tab_Mmain"));
        tab_Mmain->setEnabled(true);
        tab_Mmain->setGeometry(QRect(10, 90, 1001, 481));
        tab_MManager = new QWidget();
        tab_MManager->setObjectName(QStringLiteral("tab_MManager"));
        tab_MManager->setEnabled(true);
        tab_Manager = new QTabWidget(tab_MManager);
        tab_Manager->setObjectName(QStringLiteral("tab_Manager"));
        tab_Manager->setEnabled(false);
        tab_Manager->setGeometry(QRect(0, 0, 1001, 461));
        tab_messages = new QWidget();
        tab_messages->setObjectName(QStringLiteral("tab_messages"));
        tab_Manager->addTab(tab_messages, QString());
        tab_mailbox = new QWidget();
        tab_mailbox->setObjectName(QStringLiteral("tab_mailbox"));
        tab_Manager->addTab(tab_mailbox, QString());
        tab_offers = new QWidget();
        tab_offers->setObjectName(QStringLiteral("tab_offers"));
        tab_Manager->addTab(tab_offers, QString());
        tab_actions = new QWidget();
        tab_actions->setObjectName(QStringLiteral("tab_actions"));
        tab_Manager->addTab(tab_actions, QString());
        tab_search = new QWidget();
        tab_search->setObjectName(QStringLiteral("tab_search"));
        tab_Manager->addTab(tab_search, QString());
        tab_Mmain->addTab(tab_MManager, QString());
        tab_CClub = new QWidget();
        tab_CClub->setObjectName(QStringLiteral("tab_CClub"));
        tab_CClub->setEnabled(false);
        tab_Club = new QTabWidget(tab_CClub);
        tab_Club->setObjectName(QStringLiteral("tab_Club"));
        tab_Club->setGeometry(QRect(0, 0, 1001, 561));
        tab_calendar = new QWidget();
        tab_calendar->setObjectName(QStringLiteral("tab_calendar"));
        tab_Club->addTab(tab_calendar, QString());
        tab_team = new QWidget();
        tab_team->setObjectName(QStringLiteral("tab_team"));
        tab_Club->addTab(tab_team, QString());
        tab_training = new QWidget();
        tab_training->setObjectName(QStringLiteral("tab_training"));
        tab_Club->addTab(tab_training, QString());
        tab_workers = new QWidget();
        tab_workers->setObjectName(QStringLiteral("tab_workers"));
        tab_Club->addTab(tab_workers, QString());
        tab_management = new QWidget();
        tab_management->setObjectName(QStringLiteral("tab_management"));
        tab_Club->addTab(tab_management, QString());
        tab_finances = new QWidget();
        tab_finances->setObjectName(QStringLiteral("tab_finances"));
        tab_Club->addTab(tab_finances, QString());
        tab_teamMeeting = new QWidget();
        tab_teamMeeting->setObjectName(QStringLiteral("tab_teamMeeting"));
        tab_Club->addTab(tab_teamMeeting, QString());
        tab_scouting = new QWidget();
        tab_scouting->setObjectName(QStringLiteral("tab_scouting"));
        tab_Club->addTab(tab_scouting, QString());
        tab_stadium = new QWidget();
        tab_stadium->setObjectName(QStringLiteral("tab_stadium"));
        tab_Club->addTab(tab_stadium, QString());
        tab_juniorSchool = new QWidget();
        tab_juniorSchool->setObjectName(QStringLiteral("tab_juniorSchool"));
        tab_Club->addTab(tab_juniorSchool, QString());
        tab_infrastructure = new QWidget();
        tab_infrastructure->setObjectName(QStringLiteral("tab_infrastructure"));
        tab_Club->addTab(tab_infrastructure, QString());
        tab_history = new QWidget();
        tab_history->setObjectName(QStringLiteral("tab_history"));
        tab_Club->addTab(tab_history, QString());
        tab_bikes = new QWidget();
        tab_bikes->setObjectName(QStringLiteral("tab_bikes"));
        tab_Club->addTab(tab_bikes, QString());
        tab_Mmain->addTab(tab_CClub, QString());
        tab_MMatch = new QWidget();
        tab_MMatch->setObjectName(QStringLiteral("tab_MMatch"));
        tab_match_2 = new QTabWidget(tab_MMatch);
        tab_match_2->setObjectName(QStringLiteral("tab_match_2"));
        tab_match_2->setGeometry(QRect(0, 0, 1041, 471));
        tab_match = new QWidget();
        tab_match->setObjectName(QStringLiteral("tab_match"));
        comboBox_rider1 = new QComboBox(tab_match);
        comboBox_rider1->setObjectName(QStringLiteral("comboBox_rider1"));
        comboBox_rider1->setGeometry(QRect(20, 50, 301, 22));
        comboBox_rider2 = new QComboBox(tab_match);
        comboBox_rider2->setObjectName(QStringLiteral("comboBox_rider2"));
        comboBox_rider2->setGeometry(QRect(20, 70, 301, 22));
        comboBox_rider3 = new QComboBox(tab_match);
        comboBox_rider3->setObjectName(QStringLiteral("comboBox_rider3"));
        comboBox_rider3->setGeometry(QRect(20, 90, 301, 22));
        comboBox_rider4 = new QComboBox(tab_match);
        comboBox_rider4->setObjectName(QStringLiteral("comboBox_rider4"));
        comboBox_rider4->setGeometry(QRect(20, 110, 301, 22));
        textBrowser_heatDisplay = new QTextBrowser(tab_match);
        textBrowser_heatDisplay->setObjectName(QStringLiteral("textBrowser_heatDisplay"));
        textBrowser_heatDisplay->setGeometry(QRect(20, 180, 431, 111));
        textBrowser_pointsDisplay = new QTextBrowser(tab_match);
        textBrowser_pointsDisplay->setObjectName(QStringLiteral("textBrowser_pointsDisplay"));
        textBrowser_pointsDisplay->setGeometry(QRect(480, 10, 371, 411));
        textBrowser_gate1 = new QTextBrowser(tab_match);
        textBrowser_gate1->setObjectName(QStringLiteral("textBrowser_gate1"));
        textBrowser_gate1->setGeometry(QRect(330, 50, 16, 21));
        textBrowser_gate1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate2 = new QTextBrowser(tab_match);
        textBrowser_gate2->setObjectName(QStringLiteral("textBrowser_gate2"));
        textBrowser_gate2->setGeometry(QRect(330, 70, 16, 21));
        textBrowser_gate2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate3 = new QTextBrowser(tab_match);
        textBrowser_gate3->setObjectName(QStringLiteral("textBrowser_gate3"));
        textBrowser_gate3->setGeometry(QRect(330, 90, 16, 21));
        textBrowser_gate3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate4 = new QTextBrowser(tab_match);
        textBrowser_gate4->setObjectName(QStringLiteral("textBrowser_gate4"));
        textBrowser_gate4->setGeometry(QRect(330, 110, 16, 21));
        textBrowser_gate4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_gate4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_matchHeader = new QTextBrowser(tab_match);
        textBrowser_matchHeader->setObjectName(QStringLiteral("textBrowser_matchHeader"));
        textBrowser_matchHeader->setGeometry(QRect(20, 10, 431, 31));
        pushButton = new QPushButton(tab_match);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 330, 101, 23));
        pushButton_r_0_0 = new QPushButton(tab_match);
        pushButton_r_0_0->setObjectName(QStringLiteral("pushButton_r_0_0"));
        pushButton_r_0_0->setGeometry(QRect(360, 50, 31, 23));
        pushButton_r_0_1 = new QPushButton(tab_match);
        pushButton_r_0_1->setObjectName(QStringLiteral("pushButton_r_0_1"));
        pushButton_r_0_1->setGeometry(QRect(390, 50, 31, 23));
        pushButton_r_0_2 = new QPushButton(tab_match);
        pushButton_r_0_2->setObjectName(QStringLiteral("pushButton_r_0_2"));
        pushButton_r_0_2->setGeometry(QRect(420, 50, 31, 23));
        pushButton_r_1_1 = new QPushButton(tab_match);
        pushButton_r_1_1->setObjectName(QStringLiteral("pushButton_r_1_1"));
        pushButton_r_1_1->setGeometry(QRect(390, 70, 31, 23));
        pushButton_r_1_0 = new QPushButton(tab_match);
        pushButton_r_1_0->setObjectName(QStringLiteral("pushButton_r_1_0"));
        pushButton_r_1_0->setGeometry(QRect(360, 70, 31, 23));
        pushButton_r_1_2 = new QPushButton(tab_match);
        pushButton_r_1_2->setObjectName(QStringLiteral("pushButton_r_1_2"));
        pushButton_r_1_2->setGeometry(QRect(420, 70, 31, 23));
        pushButton_r_2_1 = new QPushButton(tab_match);
        pushButton_r_2_1->setObjectName(QStringLiteral("pushButton_r_2_1"));
        pushButton_r_2_1->setGeometry(QRect(390, 90, 31, 23));
        pushButton_r_2_0 = new QPushButton(tab_match);
        pushButton_r_2_0->setObjectName(QStringLiteral("pushButton_r_2_0"));
        pushButton_r_2_0->setGeometry(QRect(360, 90, 31, 23));
        pushButton_r_3_1 = new QPushButton(tab_match);
        pushButton_r_3_1->setObjectName(QStringLiteral("pushButton_r_3_1"));
        pushButton_r_3_1->setGeometry(QRect(390, 110, 31, 23));
        pushButton_r_3_0 = new QPushButton(tab_match);
        pushButton_r_3_0->setObjectName(QStringLiteral("pushButton_r_3_0"));
        pushButton_r_3_0->setGeometry(QRect(360, 110, 31, 23));
        pushButton_r_2_2 = new QPushButton(tab_match);
        pushButton_r_2_2->setObjectName(QStringLiteral("pushButton_r_2_2"));
        pushButton_r_2_2->setGeometry(QRect(420, 90, 31, 23));
        pushButton_r_3_2 = new QPushButton(tab_match);
        pushButton_r_3_2->setObjectName(QStringLiteral("pushButton_r_3_2"));
        pushButton_r_3_2->setGeometry(QRect(420, 110, 31, 23));
        pushButton_apply_changes = new QPushButton(tab_match);
        pushButton_apply_changes->setObjectName(QStringLiteral("pushButton_apply_changes"));
        pushButton_apply_changes->setGeometry(QRect(360, 140, 91, 23));
        tab_match_2->addTab(tab_match, QString());
        tab_prematch = new QWidget();
        tab_prematch->setObjectName(QStringLiteral("tab_prematch"));
        comb_h0 = new QComboBox(tab_prematch);
        comb_h0->setObjectName(QStringLiteral("comb_h0"));
        comb_h0->setGeometry(QRect(30, 20, 231, 22));
        comb_h1 = new QComboBox(tab_prematch);
        comb_h1->setObjectName(QStringLiteral("comb_h1"));
        comb_h1->setGeometry(QRect(30, 50, 231, 22));
        comb_h2 = new QComboBox(tab_prematch);
        comb_h2->setObjectName(QStringLiteral("comb_h2"));
        comb_h2->setGeometry(QRect(30, 80, 231, 22));
        comb_h5 = new QComboBox(tab_prematch);
        comb_h5->setObjectName(QStringLiteral("comb_h5"));
        comb_h5->setGeometry(QRect(30, 170, 231, 22));
        comb_h3 = new QComboBox(tab_prematch);
        comb_h3->setObjectName(QStringLiteral("comb_h3"));
        comb_h3->setGeometry(QRect(30, 110, 231, 22));
        comb_h4 = new QComboBox(tab_prematch);
        comb_h4->setObjectName(QStringLiteral("comb_h4"));
        comb_h4->setGeometry(QRect(30, 140, 231, 22));
        comb_h6 = new QComboBox(tab_prematch);
        comb_h6->setObjectName(QStringLiteral("comb_h6"));
        comb_h6->setGeometry(QRect(30, 200, 231, 22));
        comb_a6 = new QComboBox(tab_prematch);
        comb_a6->setObjectName(QStringLiteral("comb_a6"));
        comb_a6->setGeometry(QRect(520, 200, 231, 22));
        comb_a0 = new QComboBox(tab_prematch);
        comb_a0->setObjectName(QStringLiteral("comb_a0"));
        comb_a0->setGeometry(QRect(520, 20, 231, 22));
        comb_a3 = new QComboBox(tab_prematch);
        comb_a3->setObjectName(QStringLiteral("comb_a3"));
        comb_a3->setGeometry(QRect(520, 110, 231, 22));
        comb_a5 = new QComboBox(tab_prematch);
        comb_a5->setObjectName(QStringLiteral("comb_a5"));
        comb_a5->setGeometry(QRect(520, 170, 231, 22));
        comb_a2 = new QComboBox(tab_prematch);
        comb_a2->setObjectName(QStringLiteral("comb_a2"));
        comb_a2->setGeometry(QRect(520, 80, 231, 22));
        comb_a1 = new QComboBox(tab_prematch);
        comb_a1->setObjectName(QStringLiteral("comb_a1"));
        comb_a1->setGeometry(QRect(520, 50, 231, 22));
        comb_a4 = new QComboBox(tab_prematch);
        comb_a4->setObjectName(QStringLiteral("comb_a4"));
        comb_a4->setGeometry(QRect(520, 140, 231, 22));
        comb_h7 = new QComboBox(tab_prematch);
        comb_h7->setObjectName(QStringLiteral("comb_h7"));
        comb_h7->setGeometry(QRect(30, 230, 231, 22));
        comb_a7 = new QComboBox(tab_prematch);
        comb_a7->setObjectName(QStringLiteral("comb_a7"));
        comb_a7->setGeometry(QRect(520, 230, 231, 22));
        but_team_apply = new QPushButton(tab_prematch);
        but_team_apply->setObjectName(QStringLiteral("but_team_apply"));
        but_team_apply->setGeometry(QRect(30, 300, 75, 23));
        tab_match_2->addTab(tab_prematch, QString());
        tab_informations = new QWidget();
        tab_informations->setObjectName(QStringLiteral("tab_informations"));
        comb_h14_1 = new QComboBox(tab_informations);
        comb_h14_1->setObjectName(QStringLiteral("comb_h14_1"));
        comb_h14_1->setGeometry(QRect(10, 40, 251, 22));
        comb_h14_2 = new QComboBox(tab_informations);
        comb_h14_2->setObjectName(QStringLiteral("comb_h14_2"));
        comb_h14_2->setGeometry(QRect(10, 70, 251, 22));
        comb_h15_1 = new QComboBox(tab_informations);
        comb_h15_1->setObjectName(QStringLiteral("comb_h15_1"));
        comb_h15_1->setGeometry(QRect(10, 140, 251, 22));
        comb_h15_2 = new QComboBox(tab_informations);
        comb_h15_2->setObjectName(QStringLiteral("comb_h15_2"));
        comb_h15_2->setGeometry(QRect(10, 170, 251, 22));
        pushButton_accept_nom = new QPushButton(tab_informations);
        pushButton_accept_nom->setObjectName(QStringLiteral("pushButton_accept_nom"));
        pushButton_accept_nom->setGeometry(QRect(60, 220, 201, 23));
        tab_match_2->addTab(tab_informations, QString());
        tab_Mmain->addTab(tab_MMatch, QString());
        tab_GGame = new QWidget();
        tab_GGame->setObjectName(QStringLiteral("tab_GGame"));
        tab_Game = new QTabWidget(tab_GGame);
        tab_Game->setObjectName(QStringLiteral("tab_Game"));
        tab_Game->setGeometry(QRect(0, 0, 991, 551));
        tab_gameNls = new QWidget();
        tab_gameNls->setObjectName(QStringLiteral("tab_gameNls"));
        but_new = new QPushButton(tab_gameNls);
        but_new->setObjectName(QStringLiteral("but_new"));
        but_new->setGeometry(QRect(30, 20, 81, 23));
        but_load = new QPushButton(tab_gameNls);
        but_load->setObjectName(QStringLiteral("but_load"));
        but_load->setGeometry(QRect(30, 100, 81, 21));
        but_save = new QPushButton(tab_gameNls);
        but_save->setObjectName(QStringLiteral("but_save"));
        but_save->setGeometry(QRect(30, 130, 81, 21));
        tab_Game->addTab(tab_gameNls, QString());
        tab_settings = new QWidget();
        tab_settings->setObjectName(QStringLiteral("tab_settings"));
        tab_Game->addTab(tab_settings, QString());
        tab_Mmain->addTab(tab_GGame, QString());
        name_label = new QTextBrowser(centralWidget);
        name_label->setObjectName(QStringLiteral("name_label"));
        name_label->setGeometry(QRect(20, 20, 341, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        name_label->setFont(font);
        but_continue = new QPushButton(centralWidget);
        but_continue->setObjectName(QStringLiteral("but_continue"));
        but_continue->setGeometry(QRect(864, 20, 111, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1014, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tab_Mmain->setCurrentIndex(2);
        tab_Manager->setCurrentIndex(0);
        tab_Club->setCurrentIndex(0);
        tab_match_2->setCurrentIndex(0);
        tab_Game->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_messages), QApplication::translate("MainWindow", "Wiadomosci", 0));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_mailbox), QApplication::translate("MainWindow", "Skrzynka", 0));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_offers), QApplication::translate("MainWindow", "Oferty", 0));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_actions), QApplication::translate("MainWindow", "Akcje", 0));
        tab_Manager->setTabText(tab_Manager->indexOf(tab_search), QApplication::translate("MainWindow", "Szukaj", 0));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_MManager), QApplication::translate("MainWindow", "Manager", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_calendar), QApplication::translate("MainWindow", "Terminarz", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_team), QApplication::translate("MainWindow", "Kadra", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_training), QApplication::translate("MainWindow", "Trening", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_workers), QApplication::translate("MainWindow", "Sztab", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_management), QApplication::translate("MainWindow", "Zarzad", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_finances), QApplication::translate("MainWindow", "Finanse", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_teamMeeting), QApplication::translate("MainWindow", "Zebranie", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_scouting), QApplication::translate("MainWindow", "Obserwacje", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_stadium), QApplication::translate("MainWindow", "Stadion", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_juniorSchool), QApplication::translate("MainWindow", "Szkolka", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_infrastructure), QApplication::translate("MainWindow", "Infrastruktura", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_history), QApplication::translate("MainWindow", "Historia", 0));
        tab_Club->setTabText(tab_Club->indexOf(tab_bikes), QApplication::translate("MainWindow", "Park Maszyn", 0));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_CClub), QApplication::translate("MainWindow", "Klub", 0));
        textBrowser_gate1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ff0000;\">A</span></p></body></html>", 0));
        textBrowser_gate2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0000ff;\">B</span></p></body></html>", 0));
        textBrowser_gate3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#d3d3d3;\">C</span></p></body></html>", 0));
        textBrowser_gate4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffff00;\">D</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Nastepny bieg", 0));
        pushButton_r_0_0->setText(QApplication::translate("MainWindow", "r. z.", 0));
        pushButton_r_0_1->setText(QApplication::translate("MainWindow", "r. t.", 0));
        pushButton_r_0_2->setText(QApplication::translate("MainWindow", "z. z.", 0));
        pushButton_r_1_1->setText(QApplication::translate("MainWindow", "r. t.", 0));
        pushButton_r_1_0->setText(QApplication::translate("MainWindow", "r. z.", 0));
        pushButton_r_1_2->setText(QApplication::translate("MainWindow", "z. z.", 0));
        pushButton_r_2_1->setText(QApplication::translate("MainWindow", "r. t.", 0));
        pushButton_r_2_0->setText(QApplication::translate("MainWindow", "r. z.", 0));
        pushButton_r_3_1->setText(QApplication::translate("MainWindow", "r. t.", 0));
        pushButton_r_3_0->setText(QApplication::translate("MainWindow", "r. z.", 0));
        pushButton_r_2_2->setText(QApplication::translate("MainWindow", "z. z.", 0));
        pushButton_r_3_2->setText(QApplication::translate("MainWindow", "z. z.", 0));
        pushButton_apply_changes->setText(QApplication::translate("MainWindow", "Zatwierd\305\272 zmiany", 0));
        tab_match_2->setTabText(tab_match_2->indexOf(tab_match), QApplication::translate("MainWindow", "Zawody", 0));
        but_team_apply->setText(QApplication::translate("MainWindow", "Zatwierdz", 0));
        tab_match_2->setTabText(tab_match_2->indexOf(tab_prematch), QApplication::translate("MainWindow", "Ekran Przedmeczowy", 0));
        pushButton_accept_nom->setText(QApplication::translate("MainWindow", "Akceptuj sk\305\202ad bieg\303\263w nominowanych", 0));
        tab_match_2->setTabText(tab_match_2->indexOf(tab_informations), QApplication::translate("MainWindow", "Informacje", 0));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_MMatch), QApplication::translate("MainWindow", "Zawody", 0));
        but_new->setText(QApplication::translate("MainWindow", "Nowa Gra", 0));
        but_load->setText(QApplication::translate("MainWindow", "Wczytaj", 0));
        but_save->setText(QApplication::translate("MainWindow", "Zapisz", 0));
        tab_Game->setTabText(tab_Game->indexOf(tab_gameNls), QApplication::translate("MainWindow", "Gra...", 0));
        tab_Game->setTabText(tab_Game->indexOf(tab_settings), QApplication::translate("MainWindow", "Ustawienia", 0));
        tab_Mmain->setTabText(tab_Mmain->indexOf(tab_GGame), QApplication::translate("MainWindow", "Gra", 0));
        but_continue->setText(QApplication::translate("MainWindow", "Kontynuuj", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
