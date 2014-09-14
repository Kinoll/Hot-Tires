#ifndef TRAINING_SCHEME_H
#define TRAINING_SCHEME_H

#include <QStringList>
#include <QString>
#include <QDate>
#include <QVector>

//training scheme createt by player or predefined. Training scheme
// is assign to the specific training day (training_day) for all riders.


class training_scheme
{
private:
    //
    QString name;
public:
    //todo: make private and write access methods
    qint8 start_and_reflex_training;
    qint8 ride_and_steer_training;
    qint8 team_ride_training;
    qint8 track_exp_training;
    qint16 track_id;
    qint8 psyche_training;
    qint8 condition_and_strength_training;

    training_scheme();
    training_scheme(QString lname);
    void makeFromList(QStringList info);
    QString getName();

};

#endif // TRAINING_SCHEME_H
