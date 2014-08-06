#include "heat_screen.h"
#include "ui_heat_screen.h"

heat_screen::heat_screen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::heat_screen)
{
    ui->setupUi(this);
    QList < QStringList > records;
    csv CSV;
    for(int i = 0; i < 4; i++)
    {
        if (CSV.exist("C:/Users/Kinoll/Documents/GitHub/Hot-Tires/source/heat/pos"+QString::number(i)+".csv"))
            records << (CSV.read("C:/Users/Kinoll/Documents/GitHub/Hot-Tires/source/heat/pos"+QString::number(i)+".csv"));
    }
    int size = records[0].size();
    for (int i = 0; i < records.size(); i++)
        if (records[i].size() < size)
            size = records[i].size();
    QList <QStringList> settings = db.CSV.read("C:/Users/Kinoll/Documents/GitHub/Hot-Tires/source/heat/settings.csv");
    QGraphicsScene scene;
    QPixmap pixmap("C:/Users/Kinoll/Documents/GitHub/Hot-Tires/source/tracks/"+settings[0][1]+".png");
    QPainter painter(ui->heatscreen->viewport());
    painter.setPen(Qt::blue);
    painter.setBackground(QBrush(pixmap));
    painter.setBrush(QBrush(Qt::green, Qt::SolidPattern));
    painter.drawEllipse(20, 20, 15, 15);
    update();
}

heat_screen::~heat_screen()
{
    delete ui;
}
