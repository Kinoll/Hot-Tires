#include "nations.h"

void load_country()
{
    QStringList rowData, rowOfData;
    csv_read reader("nations.csv");
    rowOfData = reader.read();
    gamer.nations=new nation[rowOfData.size()];
    gamer.numb_of_nations=rowOfData.size()-1;

  // ui->name_label->setText();

    for (int x = 0; x < rowOfData.size()-1; x++)
    {
        rowData = rowOfData.at(x).split(",");


        gamer.nations[x].nazwa=rowData[1];
        gamer.nations[x].icon.addFile("flags/"+gamer.nations[x].nazwa+".bmp" );



    }
}
