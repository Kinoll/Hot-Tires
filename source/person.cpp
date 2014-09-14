#include "person.h"

person::person()
{
}

void person::makeFromList(QStringList info)
{
    id = info[0].toInt();
    name = info[1];
    surname = info[2];
    birth_date = QDate(info[5].toShort(),info[4].toShort(), info[3].toShort());
    nation = info[6].toShort();

    reflex = info[7].toShort();
    tech_ride = info[8].toShort();
    tech_steer = info[9].toShort();
    tech_start = info[10].toShort();
    team_ride = info[11].toShort();
    contract_id = info[12].toShort();
    bravery = info[13].toShort();
    exp = info[14].toShort();
    //track_exp; /* Fixed length vector, determined by number of tracks */
    track_exp_bonus  = info[15].toShort();
    psyche  = info[16].toShort();
    strength = info[17].toShort();
    condition = info[18].toShort();
    disposition_overall = info[19].toShort();
    disposition_season = info[20].toShort();
    talent = info[21].toShort();
    professionalism = info[22].toShort();
    determination = info[23].toShort();
    //competition_priority; /* Fixed length vector, determined by number of competitions */
    injury_length = info[24].toShort();
    technical_skills = info[25].toShort();

    /* Coaches skills */
    mental_training = info[26].toShort();
    discipline = info[27].toShort();
    motivation = info[28].toShort();
    tech_training = info[29].toShort();
    start_training = info[30].toShort();
    youth_training = info[31].toShort();
    physical_training = info[32].toShort();
    injury_treatment = info[33].toShort();

    /* Talent seeker's skills */
    talent_estim = info[34].toShort();
    skills_estim = info[35].toShort();

    /* Possible roles; 0 - inactive forever, 1 - temporary suspended, 2 - possible */
    is_rider = info[36].toShort();
    is_coach = info[37].toShort();
    is_manager = info[38].toShort();
    is_mechanic = info[39].toShort();

    //training days
    tr_day.append(info[40].toShort());
    tr_day.append(info[41].toShort());
    tr_day.append(info[42].toShort());
    tr_day.append(info[43].toShort());
    tr_day.append(info[44].toShort());
    tr_day.append(info[45].toShort());
    tr_day.append(info[46].toShort());

    team= info[40].toShort();

}


void person::perform_training()
{
    //
//   training_days[this->tr_day[today]].perform();
}
