#include <iostream>
#include <QtWidgets/QApplication>
#include "affichage.h"
#include "ex2.h"

using namespace std;
int main(int argc, char** argv) {
    QApplication app (argc, argv);
    //ex 1
//    client window;
//    window.show();

//ex2
window2 window;
window.show();

    return app.exec();
}
