#ifndef DESSINCONSOLEV9_H
#define DESSINCONSOLEV9_H
// http://www.ascii-fr.com/Generateur-de-texte.html
#include <iostream>
using namespace std;
#include <ctime>
#include "consoleJR.h"
#include <Windows.h>

class DessinConsole
{
    public:
        int x;
        int y;
        int couleurFond;

        DessinConsole(int col=1, int lig=1, int coulFond = 1);

        int couleur();
        void sapin();
        void mec1();
        void cerf();
        void panneau();
        void bart();
        void lapin();
        void tete();
        void snake();
        void ordinateur();

};

#endif // DESSINCONSOLE_H
