#include <iostream>
#include <QtWidgets/QApplication>
#include "affichage.h"
using namespace std;
int main(int argc, char** argv) {
    QApplication app (argc, argv);
    client window;
    window.show();
    return 0;
}
