#ifndef PERSON_H
#define PERSON_H
#include <QStringList>
#include <QString>
#include <QDate>
#include <QVector>

using namespace std;
class person
{
public:

    /* Mutual variables */
    unsigned long id;
    QString name;
    QString surname;
    QDate birth_date;
    qint8 nation;

    QList<QStringList> history;/* To do: add structure containing person's history */

    /* Rider's skills */
    qint8 reflex;
    qint8 tech_ride;
    qint8 tech_steer;
    qint8 tech_start;
    qint8 team_ride;
    qint8 contract_id;
    qint8 bravery;
    qint8 exp;
    QVector<qint8> track_exp; /* Fixed length vector, determined by number of tracks */
    qint8 track_exp_bonus;
    qint8 psyche;
    qint8 strength;
    qint8 condition;
    qint8 disposition_overall;
    qint8 disposition_season;
    qint8 talent;
    qint8 professionalism;
    qint8 determination;
    QVector<qint8> competition_priority; /* Fixed length vector, determined by number of competitions */
    short injury_length; /* 0 means no injury */
    qint8 technical_skills;

    /* Coache's skills */
    qint8 mental_training;
    qint8 discipline;
    qint8 motivation;
    qint8 tech_training;
    qint8 start_training;
    qint8 youth_training;
    qint8 physical_training;
    qint8 injury_treatment; /* Abillity to cure minor injuries */

    /* Talent seeker's skills */
    qint8 talent_estim; /* Ability to estimate rider's potential */
    qint8 skills_estim;

    /* Possible roles; 0 - inactive forever, 1 - temporary suspended, 2 - possible */
    qint8 is_rider;
    qint8 is_coach;
    qint8 is_manager;
    qint8 is_mechanic;

    person();
    void makeFromList(QStringList info);
};

#endif // PERSON_H
