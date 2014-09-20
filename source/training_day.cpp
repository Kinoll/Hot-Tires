#include "training_day.h"
#include "training.h"

training_day::training_day()
{
}



void training_day::makeFromList(QStringList info)
{
    rider_id = info[0].toInt();
    day_name = info[1];
    training_scheme = info[2].toInt();
    coach = info[3].toInt();
}

void training_day::perform()
{
    training* tr=new training(rider_id,training_scheme,coach);
    tr->perform();
    delete(tr);
    //
}

int training_day::nameToInt(QString name)
{
    if (name=="Monday") return(0);
    if (name=="Tuesday") return(1);
    if (name=="Wednesday") return(2);
    if (name=="Thursday") return(3);
    if (name=="Friday") return(4);
    if (name=="Saturday") return(5);
    if (name=="Sunday") return(6);



}

QString training_day::intToName(int day)
{
    if (day==0) return("Monday");
    if (day==1) return("Tuesday");
    if (day==2) return("Wednesday");
    if (day==3) return("Thursday");
    if (day==4) return("Friday");
    if (day==5) return("Saturday");
    if (day==6) return("Sunday");

}
