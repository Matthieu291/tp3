//
// Created by Matthieu on 21/03/2020.
//

#ifndef TP3_EX2_H
#define TP3_EX2_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>

class window2 : public QMainWindow {
    Q_OBJECT
public:
    window2();
    QPushButton* button;
    int value =0;
    QTextEdit * textEdit;
public slots :
    void nameButton();

};

#endif //TP3_EX2_H
