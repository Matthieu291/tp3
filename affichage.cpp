//
// Created by Matthieu on 18/03/2020.
//

#include "affichage.h"

client::client() {
    setWindowTitle("IHM");
    setMinimumSize(600, 400);
    QLayout * layout1 = new QVBoxLayout();
    bar = new QProgressBar(this);
    bar->setValue(0);
    bar->setGeometry(10,10,180,30);
    slider = new QSlider(Qt::Horizontal);
    slider->setValue(0);
    slider->setGeometry(10,40,180,30);
    QWidget *WidgetParent = new QWidget;
    layout1->addWidget(bar);
    layout1->addWidget(slider);
    WidgetParent->setLayout(layout1);
    setCentralWidget(WidgetParent);
    connect (slider, SIGNAL (valueChanged(int)),bar,SLOT(setValue(int)));
}

