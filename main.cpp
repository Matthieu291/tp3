#include <iostream>
#include <QtWidgets/QApplication>
#include "affichage.h"
#include <QPushButton>
using namespace std;
int main(int argc, char** argv) {
    QApplication app (argc, argv);
    client window;
    window.show();

    return app.exec();
}
