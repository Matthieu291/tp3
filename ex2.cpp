//
// Created by Matthieu on 21/03/2020.
//

#include "ex2.h"
#include <QVBoxLayout>
#include <QtCore/QCoreApplication>
#include <QtWidgets/QTextEdit>

window2::window2() {
    setWindowTitle("IHM");
    setMinimumSize(600, 400);
    button = new QPushButton("fils");
    QVBoxLayout* layout1 = new QVBoxLayout;
    layout1->addWidget(button);
    QWidget *WidgetParent = new QWidget;
    WidgetParent->setLayout(layout1);
    setCentralWidget(WidgetParent);
    //connect (button,SIGNAL(clicked()),qApp,SLOT(quit()));
    connect (button,SIGNAL(clicked()),this,SLOT(nameButton()));
}

void window2::nameButton() {
    button->setText("Exemple");
    value++;
    //textEdit->insertPlainText(QString("Exemple  %1 \n").arg(value));
}

