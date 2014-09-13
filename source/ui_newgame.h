/********************************************************************************
** Form generated from reading UI file 'newgame.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAME_H
#define UI_NEWGAME_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_newgame
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *name;
    QLineEdit *surname;
    QCalendarWidget *birth;
    QComboBox *country;

    void setupUi(QDialog *newgame)
    {
        if (newgame->objectName().isEmpty())
            newgame->setObjectName(QStringLiteral("newgame"));
        newgame->resize(563, 320);
        buttonBox = new QDialogButtonBox(newgame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        name = new QLineEdit(newgame);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(50, 50, 161, 20));
        surname = new QLineEdit(newgame);
        surname->setObjectName(QStringLiteral("surname"));
        surname->setGeometry(QRect(50, 80, 161, 20));
        birth = new QCalendarWidget(newgame);
        birth->setObjectName(QStringLiteral("birth"));
        birth->setGeometry(QRect(320, 50, 216, 141));
        birth->setMinimumDate(QDate(1930, 12, 31));
        birth->setMaximumDate(QDate(2005, 12, 31));
        country = new QComboBox(newgame);
        country->setObjectName(QStringLiteral("country"));
        country->setGeometry(QRect(50, 110, 161, 22));
        country->setEditable(true);
        country->setMaxCount(2147483646);

        retranslateUi(newgame);
        QObject::connect(buttonBox, SIGNAL(accepted()), newgame, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newgame, SLOT(reject()));

        country->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(newgame);
    } // setupUi

    void retranslateUi(QDialog *newgame)
    {
        newgame->setWindowTitle(QApplication::translate("newgame", "Dialog", 0));
        name->setText(QApplication::translate("newgame", "Name", 0));
        surname->setText(QApplication::translate("newgame", "Surname", 0));
        country->clear();
        country->insertItems(0, QStringList()
         << QApplication::translate("newgame", "Cipao", 0)
        );
        country->setCurrentText(QApplication::translate("newgame", "Cipao", 0));
    } // retranslateUi

};

namespace Ui {
    class newgame: public Ui_newgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAME_H
