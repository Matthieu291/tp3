//
// Created by Matthieu on 18/03/2020.
//
#include <QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QProgressBar>
#include <QSlider>
#include <QLayout>

#ifndef TP3_AFFICHAGE_H
#define TP3_AFFICHAGE_H


class client : public QMainWindow {
    Q_OBJECT
public:
    QProgressBar * bar;
    QSlider * slider;
    client();

};


#endif //TP3_AFFICHAGE_H
