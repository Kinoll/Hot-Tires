/********************************************************************************
** Form generated from reading UI file 'heat_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEAT_SCREEN_H
#define UI_HEAT_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_heat_screen
{
public:
    QGraphicsView *heatscreen;

    void setupUi(QWidget *heat_screen)
    {
        if (heat_screen->objectName().isEmpty())
            heat_screen->setObjectName(QStringLiteral("heat_screen"));
        heat_screen->resize(800, 600);
        heatscreen = new QGraphicsView(heat_screen);
        heatscreen->setObjectName(QStringLiteral("heatscreen"));
        heatscreen->setGeometry(QRect(0, 0, 800, 600));

        retranslateUi(heat_screen);

        QMetaObject::connectSlotsByName(heat_screen);
    } // setupUi

    void retranslateUi(QWidget *heat_screen)
    {
        heat_screen->setWindowTitle(QApplication::translate("heat_screen", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class heat_screen: public Ui_heat_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEAT_SCREEN_H
