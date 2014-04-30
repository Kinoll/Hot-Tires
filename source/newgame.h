#ifndef NEWGAME_H
#define NEWGAME_H

#include <QDialog>

namespace Ui {
class newgame;
}

class newgame : public QDialog
{
    Q_OBJECT
    
public:
    explicit newgame(QWidget *parent = 0);
    ~newgame();
    
private slots:
    void on_buttonBox_accepted();

private:
    Ui::newgame *ui;
};

#endif // NEWGAME_H
