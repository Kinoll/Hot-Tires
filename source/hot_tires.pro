#-------------------------------------------------
#
# Project created by QtCreator 2013-05-28T21:30:54
#
#-------------------------------------------------

QT       += core gui



#CONFIG   += c++11
#QMAKE_CXXFLAGS += -stdlib=libc++
#QMAKE_CXXFLAGS += -mmacosx-version-min=10.7

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hot_tires
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
	draw_run.cpp \
    person.cpp \
    contract.cpp \
    manager_contract.cpp \
    rider_contract.cpp \
    rider.cpp \
    manager.cpp \
    player.cpp \
    game.cpp \
    gamescreen_view.cpp \
    controller.cpp \
    newgame.cpp \
    csv_read.cpp \
    nation.cpp \
    track.cpp \
    heat.cpp \
    heat_rider.cpp \
    csv.cpp \
    match.cpp \
    dmp.cpp \
    rider_container.cpp \
    team.cpp \
    load_save.cpp \
    html.cpp \
    database.cpp \
    calendar.cpp \
    event_game.cpp \
    ind16.cpp \
    pgm.cpp \
    triangle.cpp \
    vec2d.cpp \
    heat_new.cpp \
    heat_rider_new.cpp \
    htmath.cpp \
    heat_screen.cpp

HEADERS  += mainwindow.h \
	draw_run.h \
    person.h \
    contract.h \
    manager_contract.h \
    rider_contract.h \
    rider.h \
    manager.h \
    player.h \
    game.h \
    gamescreen_view.h \
    controller.h \
    newgame.h \
    csv_read.h \
    nation.h \
    track.h \
    heat.h \
    heat_rider.h \
    csv.h \
    match.h \
    dmp.h \
    rider_container.h \
    team.h \
    load_save.h \
    html.h \
    database.h \
    calendar.h \
    event_game.h \
    ind16.h \
    pgm.h \
    triangle.h \
    vec2d.h \
    heat_new.h \
    heat_rider_new.h \
    htmath.h \
    heat_screen.h

FORMS    += mainwindow.ui \
    newgame.ui \
    heat_screen.ui

