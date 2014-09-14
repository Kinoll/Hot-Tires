#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newgame.h"
#include <iostream>
#include <QVector>
#include <QProcess>
#include "csv.h"
#include <QInputDialog>

using namespace std;




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ///////////////////////////////////////////////
    db.load();

    //return;
    //////////////////////////////////////////////
    srand((unsigned)time(0));
    ui->setupUi(this);
    setWindowTitle("Hot Tires");
    combos_a << ui->comb_a0 << ui->comb_a1 << ui->comb_a2 << ui->comb_a3
                << ui->comb_a4 << ui->comb_a5 << ui->comb_a6 << ui->comb_a7;
    combos_h << ui->comb_h0 << ui->comb_h1 << ui->comb_h2 << ui->comb_h3
                << ui->comb_h4 << ui->comb_h5 << ui->comb_h6 << ui->comb_h7;
    combos_heat << ui->comboBox_rider1 << ui->comboBox_rider2 << ui->comboBox_rider3
                << ui->comboBox_rider4;
    buttons_reserve.resize(4); buttons_reserve[0].resize(3); buttons_reserve[1].resize(3);
    buttons_reserve[2].resize(3); buttons_reserve[3].resize(3);

    buttons_reserve[0][0] = ui->pushButton_r_0_0; buttons_reserve[0][1] = ui->pushButton_r_0_1; buttons_reserve[0][2] = ui->pushButton_r_0_2;
    buttons_reserve[1][0] = ui->pushButton_r_1_0; buttons_reserve[1][1] = ui->pushButton_r_1_1; buttons_reserve[1][2] = ui->pushButton_r_1_2;
    buttons_reserve[2][0] = ui->pushButton_r_2_0; buttons_reserve[2][1] = ui->pushButton_r_2_1; buttons_reserve[2][2] = ui->pushButton_r_2_2;
    buttons_reserve[3][0] = ui->pushButton_r_3_0; buttons_reserve[3][1] = ui->pushButton_r_3_1; buttons_reserve[3][2] = ui->pushButton_r_3_2;
    for (int i = 0; i < 4; i++)
        for (int k = 0; k < 3; k++)
            buttons_reserve[i][k]->setHidden(true);


    //training manager init
    trManager=new training_manager(ui);

}

MainWindow::~MainWindow()
{
    delete trManager;
    delete ui;
}
void MainWindow::fillDmp()
{
    QStringList fill1 = db.dmps[0].teams[0]->getRidersTextRepresenatation();
    QStringList fill2 = db.dmps[0].teams[1]->getRidersTextRepresenatation();

    for (int i = 0; i < combos_a.size(); i++)
    {
        combos_a[i]->insertItems(0, fill2);
        combos_h[i]->insertItems(0, fill1);
    }

    combos_a[7]->setHidden(true);
    combos_h[7]->setHidden(true);

    for (int i = 0; i < db.dmps[0].teams.size(); i++)
    {
        if(db.dmps[0].teams[i]->id != db.players_team_id)
        {
            if (i == 0)
            {
                for (int k = 0; k < combos_a.size() - 1; k++)
                {
                    combos_a[k]->setCurrentIndex(k);
                    combos_a[k]->setDisabled(true);
                }
            }
            else
            {
                for (int k = 0; k < combos_a.size() - 1; k++)
                {
                    combos_h[k]->setCurrentIndex(k);
                    combos_h[k]->setDisabled(true);
                }
            }
        }
    }
}
void MainWindow::fillCurrentHeat(QString type, int players_team = 4)
{
    for (int i = 0; i < 4; i++)
        for (int k = 0; k < 3; k++)
            buttons_reserve[i][k]->setHidden(true);
    QStringList fill1;
    int players_team_last_index, players_team_first_index;

    for (int i = 0; i < combos_heat.size(); i++)
        combos_heat[i]->clear();

    if (type == "dmp")
    {
        for (int i = 0; i < 4; i++)
            for (int k = 0; k < 3; k++)
            {
                if (static_cast<int>((db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[i].rider_number < 8)) == players_team)
                    if (db.dmps[0].possibleChanges(!players_team, k, i).size() != 0)
                    {
                        buttons_reserve[i][k]->setHidden(false);
                    }
            }
        fill1 = db.dmps[0].getRidersTextRepresentation(players_team);

        if (players_team == 1)
        {
            players_team_first_index = 0;
            players_team_last_index = 8;
        }
        else if (players_team == 0)
        {
            players_team_first_index = 9;
            players_team_last_index = 16;
        }

        for (int i = 0; i < combos_heat.size(); i++)
        {
            if(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[i].rider_number < players_team_last_index)
            {
                combos_heat[i]->insertItems(0, fill1);
                combos_heat[i]->setDisabled(false);
            }
            else
            {
                combos_heat[i]->insertItem(0, (QString::number(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[i].rider_number + 1) + " " + db.dmps[0].riders_list[db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[i].rider_number]->surname));
                combos_heat[i]->setDisabled(true);
            }
        }
        for (int i = 0; i < 4; i++)
            if (combos_heat[i]->isEnabled())
                combos_heat[i]->setCurrentIndex(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[i].rider_number);
        ui->textBrowser_pointsDisplay->setHtml(db.dmps[0].pointsTextRepresentation());
    }
        //combos_heat[0]->setCurrentIndex(); !!!TO DO
    else if (type == "ind16")
        for (int i = 0; i < 4; i++)
        {
            combos_heat[i]->clear();
            combos_heat[i]->setDisabled(true);
            combos_heat[i]->insertItem(0, db.ind16s[0].riders_list[db.ind16s[0].table_of_heats.heats[db.ind16s[0].heat_number].start_positions[i].rider_number]->surname);
        }
}

void MainWindow::on_but_new_clicked()
{
   newgame *newg = new newgame;
   newg->exec();
   ui->tab_Manager->setEnabled(true);
   ui->tab_Mmain->setCurrentIndex(0);
   ui->tab_Manager->setCurrentIndex(0);

   ui->tab_Club->setEnabled(true);
   ui->tab_CClub->setEnabled(true);
    ui->tab_training->setEnabled(true);

   //QString change = gamer.player.name+" "+gamer.player.surname;
   //ui->name_label->setText(change);
    trManager->refreshForm();

}

void MainWindow::on_but_load_clicked()
{
    ui->tab_Manager->setEnabled(true);
    ui->tab_Mmain->setCurrentIndex(0);
    ui->tab_Manager->setCurrentIndex(0);
    trManager->refreshForm();

}

void MainWindow::on_name_label_textChanged()
{

}

void MainWindow::on_but_heat_clicked()

{
}

void MainWindow::on_but_match_clicked()
{
}

void MainWindow::on_but_team_apply_clicked()
{
    while (true)
    {
        db.dmps[0].containers[0].is_correct = true;
        db.dmps[0].containers[1].is_correct = true;
        db.dmps[0].containers[0].riders.clear();
        db.dmps[0].containers[1].riders.clear();

        for (int i = 0; i < combos_h.size(); i++)
            if (combos_h[i]->currentText() != "")
                db.dmps[0].containers[0].add(db.dmps[0].teams[0]->persons[combos_h[i]->currentIndex()]);
        for (int i = 0; i < combos_a.size(); i++)
            if (combos_a[i]->currentText() != "")
                db.dmps[0].containers[1].add(db.dmps[0].teams[1]->persons[combos_a[i]->currentIndex()]);
        if (!(db.dmps[0].containers[0].check("dmp", db.date) && db.dmps[0].containers[1].check("dmp", db.date)))
        {
            break;
        }
        else
            db.dmps[0].mergeContainers(db.dmps[0].containers);
            for (int i = 0; i < combos_a.size(); i++)
            {
                combos_a[i]->clear();
                combos_h[i]->clear();
            }
            fillCurrentHeat("dmp", 0);
            ui->tab_match_2->setCurrentIndex(0);
            break;
    }

}

void MainWindow::on_pushButton_clicked()
{
    if (e.event_type == "dmp" && db.dmps[0].heat_number < 15)
    {
        if (db.dmps[0].heat_number == 12)
        {
            if (db.dmps[0].getPlayerTeamNum(db.players_team_id) == -1)
            {
                db.dmps[0].aiChooseRidersNominatedHead(0);
                db.dmps[0].aiChooseRidersNominatedHead(1);
            }
            else
            {
                db.dmps[0].aiChooseRidersNominatedHead(!db.dmps[0].getPlayerTeamNum(db.players_team_id));
                ui->comb_h14_1->insertItems(0, db.dmps[0].getRidersTextRepresentation(db.dmps[0].getPlayerTeamNum(db.players_team_id)));
                ui->comb_h14_2->insertItems(0, db.dmps[0].getRidersTextRepresentation(db.dmps[0].getPlayerTeamNum(db.players_team_id)));
                ui->comb_h15_1->insertItems(0, db.dmps[0].getRidersTextRepresentation(db.dmps[0].nominatedHeatsRiders(db.dmps[0].getPlayerTeamNum(db.players_team_id)))); //zamienic "0" na druzyne gracza
                ui->comb_h15_2->insertItems(0, db.dmps[0].getRidersTextRepresentation(db.dmps[0].nominatedHeatsRiders(db.dmps[0].getPlayerTeamNum(db.players_team_id))));
                ui->tab_match_2->setCurrentIndex(2);
            }
        }

        txt = db.dmps[0].runHeat(db.riders, &db.tracks[0]); //hardcoded track!!!
        ui->textBrowser_heatDisplay->insertHtml(txt.join(" ")+"<br>");
        ui->textBrowser_matchHeader->setPlainText(db.dmps[0].teams[0]->name+ " " + QString::number(db.dmps[0].standings_m.team_points[15][0])
                + " : " + QString::number(db.dmps[0].standings_m.team_points[15][1])+ " " + db.dmps[0].teams[1]->name);
        if (db.dmps[0].heat_number != 15)
            fillCurrentHeat("dmp", 1);
    }
    else if (e.event_type == "ind16" && db.ind16s[0].heat_number < 20)
    {
        txt = db.ind16s[0].runHeat(db.riders, &db.tracks[0]); // HARDCODED TRACK!!!
        ui->textBrowser_heatDisplay->insertHtml(txt.join(" ")+"<br>");
        if (db.ind16s[0].heat_number != 20)
            fillCurrentHeat("ind16", 4);
    }
    else
    {
        if (e.event_type == "dmp")
        {
            for (int i = 0; i < db.dmps[0].riders_list.size(); i++)
                if ((i != 7) && (i != 15))
                {
                    QStringList tempHist;
                    tempHist << db.dmps[0].date.toString();
                    for (int k = 0; k < db.dmps[0].standings_m.rider_points[i].size(); k++)
                        tempHist.append(QString::number(db.dmps[0].standings_m.rider_points[i][k]));
                    db.dmps[0].riders_list[i]->history << tempHist;
                }
            db.dmps.removeFirst();
        }
        else if (e.event_type == "ind16")
        {
            for (int i = 0; i < db.ind16s[0].riders_list.size(); i++)
            {
                QStringList tempHist;
                tempHist << db.ind16s[0].date.toString();
                for (int k = 0; k < db.ind16s[0].standings_m.rider_points[i].size(); k++)
                    tempHist.append(QString::number(db.ind16s[0].standings_m.rider_points[i][k]));
                db.ind16s[0].riders_list[i]->history << tempHist;
            }
            db.ind16s.removeFirst();
        }
        ui->textBrowser_heatDisplay->setHtml("");
        ui->pushButton->setDisabled(true);
        ui->but_continue->setDisabled(false);
    }

}

void MainWindow::on_but_continue_clicked()
{
    ui->name_label->setText(db.date.toString());

    if ((db.events.isEmpty() == false) && (db.events[0].date == db.date))
    {
        ui->pushButton->setDisabled(false);
        e = db.events.takeFirst();
        ui->but_continue->setDisabled(true);
        if (e.event_type == "dmp")
        {
            fillDmp();
            ui->tab_Mmain->setCurrentIndex(2);
            ui->tab_match_2->setCurrentIndex(1);
        }
        else if (e.event_type == "ind16")
        {
            fillCurrentHeat("ind16", 4);
            ui->tab_Mmain->setCurrentIndex(2);
            ui->tab_match_2->setCurrentIndex(0);
        }
    }
    else
        db.date = db.date.addDays(1);

    trManager->refreshForm();

}


void MainWindow::on_comboBox_rider1_currentIndexChanged(const QString &arg1)
{

}


void MainWindow::on_pushButton_r_0_0_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[0].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 0, 0);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider1->clear();
        ui->comboBox_rider1->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}

void MainWindow::on_pushButton_r_0_1_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[0].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 1, 0);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider1->clear();
        ui->comboBox_rider1->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }

}

void MainWindow::on_pushButton_r_0_2_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[0].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 2, 0);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider1->clear();
        ui->comboBox_rider1->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }

}

void MainWindow::on_pushButton_r_1_0_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[1].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 0, 1);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider2->clear();
        ui->comboBox_rider2->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}

void MainWindow::on_pushButton_r_1_1_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[1].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 1, 1);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider2->clear();
        ui->comboBox_rider2->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}

void MainWindow::on_pushButton_r_1_2_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[1].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 2, 1);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider2->clear();
        ui->comboBox_rider2->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}
void MainWindow::on_pushButton_r_2_0_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[2].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 0, 2);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider3->clear();
        ui->comboBox_rider3->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}

void MainWindow::on_pushButton_r_2_1_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[2].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 1, 2);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider3->clear();
        ui->comboBox_rider3->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}

void MainWindow::on_pushButton_r_2_2_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[2].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 2, 2);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider3->clear();
        ui->comboBox_rider3->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}

void MainWindow::on_pushButton_r_3_0_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[3].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 0, 3);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider4->clear();
        ui->comboBox_rider4->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }
}

void MainWindow::on_pushButton_r_3_1_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[3].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 1, 3);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider4->clear();
        ui->comboBox_rider4->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }

}

void MainWindow::on_pushButton_r_3_2_clicked()
{
    if (e.event_type == "dmp")
    {
        int team_num = static_cast<int>(!(db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[3].rider_number < 8));
        QList<int> poss_changes = db.dmps[0].possibleChanges(team_num, 2, 3);
        QStringList fill_changes = db.dmps[0].getRidersTextRepresentation(poss_changes);
        ui->comboBox_rider4->clear();
        ui->comboBox_rider4->insertItems(0, fill_changes);
        ui->pushButton_apply_changes->setEnabled(true);
    }

}

void MainWindow::on_pushButton_apply_changes_clicked()
{
    QList<int> r_nums;
    for (int i = 0; i < 4; i++)
    {
        QString str_num, temp_str;
        str_num += combos_heat[i]->currentText()[0];
        temp_str += combos_heat[i]->currentText()[1];
        if (temp_str != " ")
            str_num += combos_heat[i]->currentText()[1];
        int r_num = str_num.toInt() - 1;
        r_nums << r_num;
    }
    for (int i = 0; i < r_nums.size(); i++)
        for (int  k = 0; k < r_nums.size(); k++)
        {
            if ( (k != i) && (r_nums[i] == r_nums[k]) )
                return;
        }
    for (int i = 0; i < 4; i++)
    {
        ui->pushButton_apply_changes->setDisabled(true);
        if (r_nums[i] != db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[i].rider_number)
        {
            if (!( (r_nums[i] == 5)|| (r_nums[i] == 6) || (r_nums[i] == 13) || (r_nums[i] == 14) ))
                db.dmps[0].standings_m.rider_rt[r_nums[i]]++;
            else
            {
                if (db.dmps[0].standings_m.rider_rn[r_nums[i]] < 2)
                    db.dmps[0].standings_m.rider_rn[r_nums[i]]++;
                else
                    db.dmps[0].standings_m.rider_rt[r_nums[i]]++;
            }

        db.dmps[0].table_of_heats.heats[db.dmps[0].heat_number].start_positions[i].rider_number = r_nums[i];
        }
    }

}


void MainWindow::on_pushButton_accept_nom_clicked()
{
    if (e.event_type == "dmp")
    {
        QVector<QComboBox*> combos(4);
        combos[0] = ui->comb_h14_1;
        combos[1] = ui->comb_h14_2;
        combos[2] = ui->comb_h15_1;
        combos[3] = ui->comb_h15_2;
        QList<int> r_nums;
        for (int i = 0; i < 4; i++)
        {
            QString str_num, temp_str;
            str_num += combos[i]->currentText()[0];
            temp_str += combos[i]->currentText()[1];
            if (temp_str != " ")
                str_num += combos[i]->currentText()[1];
            int r_num = str_num.toInt() - 1;
            r_nums << r_num;
        }
        for (int i = 0; i < r_nums.size(); i++)
            for (int  k = 0; k < r_nums.size(); k++)
            {
                if ( (k != i) && (r_nums[i] == r_nums[k]) )
                    return;
            }
        database* datb = &db;
        QList<int> pos_14 = db.dmps[0].positionInNominatedHeat(0, 13);
        QList<int> pos_15 = db.dmps[0].positionInNominatedHeat(0, 14);
        db.dmps[0].table_of_heats.heats[13].start_positions[pos_14[0]].rider_number = r_nums[3];
        db.dmps[0].table_of_heats.heats[13].start_positions[pos_14[1]].rider_number = r_nums[2];
        db.dmps[0].table_of_heats.heats[14].start_positions[pos_15[0]].rider_number = r_nums[1];
        db.dmps[0].table_of_heats.heats[14].start_positions[pos_15[1]].rider_number = r_nums[0];
        ui->pushButton_accept_nom->setDisabled(true);
    }
}

void MainWindow::on_pushButton_newScheme_clicked()
{
    trManager->new_scheme(QInputDialog::getText(this, QObject::tr("Podaj nazw� schematu"),QObject::tr("Nazwa schematu:"), QLineEdit::Normal,QObject::tr("")));
}


void MainWindow::on_pushButton_del_clicked()
{
 //   QString name=ui->comboBox_selectScheme->itemData(ui->comboBox_selectScheme->currentIndex()).toString();
    QString name=ui->comboBox_selectScheme->currentText();

    trManager->delete_scheme(name);

}

void MainWindow::on_comboBox_selectScheme_currentIndexChanged(const QString &arg1)
{
    trManager->load_scheme();
}
