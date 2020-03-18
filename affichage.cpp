//
// Created by Matthieu on 18/03/2020.
//

#include "affichage.h"

client::client() {
    setWindowTitle("IHM");
    setMinimumSize(600, 400);
    QLayout * layout1 = new QVBoxLayout();
    bar = new QProgressBar(this);
    bar->
    slider = new QSlider(Qt::Horizontal);
    QWidget *WidgetParent = new QWidget;
    layout1->addWidget(bar);
    layout1->addWidget(slider);
    WidgetParent->setLayout(layout1);
    setCentralWidget(WidgetParent);
}

