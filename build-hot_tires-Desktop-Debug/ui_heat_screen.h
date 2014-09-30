/********************************************************************************
** Form generated from reading UI file 'heat_screen.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEAT_SCREEN_H
#define UI_HEAT_SCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heat_screen
{
public:
    QGraphicsView *heatscreen;

    void setupUi(QWidget *heat_screen)
    {
        if (heat_screen->objectName().isEmpty())
            heat_screen->setObjectName(QString::fromUtf8("heat_screen"));
        heat_screen->resize(800, 600);
        heatscreen = new QGraphicsView(heat_screen);
        heatscreen->setObjectName(QString::fromUtf8("heatscreen"));
        heatscreen->setGeometry(QRect(0, 0, 800, 600));

        retranslateUi(heat_screen);

        QMetaObject::connectSlotsByName(heat_screen);
    } // setupUi

    void retranslateUi(QWidget *heat_screen)
    {
        heat_screen->setWindowTitle(QApplication::translate("heat_screen", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class heat_screen: public Ui_heat_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEAT_SCREEN_H
