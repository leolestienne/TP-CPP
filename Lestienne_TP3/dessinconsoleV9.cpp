#include "dessinconsoleV9.h"

DessinConsole::DessinConsole(int col, int lig, int coulFond)
{
    x = col;
    y = lig;
    couleurFond = coulFond;
    srand(time(0));
}

//-------------------------------------------------------------
int DessinConsole::couleur()
{
   int c;
   do{
       c = 8+(rand()%8);
     }while (c==couleurFond);

   return c;
}

//-------------------------------------------------------------
void DessinConsole::sapin()
{
    color(couleur(),couleurFond);
    gotoxy(x+4,y+1); cout <<"/ \\";
    gotoxy(x+3,y+2); cout << "//"<<(char)179<<"\\\\";
    gotoxy(x+2,y+3); cout <<"//\\ /\\\\";
    gotoxy(x+1,y+4); cout << "//\\/"<<(char)179<<"\\/\\\\";
    gotoxy(x+0,y+5); cout << "/\\/\\/ \\/\\/\\";
    color(4,couleurFond);
    gotoxy(x+4,y+6); cout << (char)192<<(char)196<<(char)217;
    color(couleur(),couleurFond); gotoxy(x+5,y); cout << "*";
        if (rand()%5){ color(couleur(),couleurFond); gotoxy(x+3,y+2); cout << "o"; }
       // if (rand()%5){ color(couleur(),couleurFond); gotoxy(x+5,y+2); cout << "o"; }
        if (rand()%10){ color(couleur(),couleurFond); gotoxy(x+7,y+2); cout << "o"; }

        if (rand()%5){ color(couleur(),couleurFond); gotoxy(x+4,y+3); cout << "o"; }
        if (rand()%5){ color(couleur(),couleurFond); gotoxy(x+6,y+3); cout << "o"; }

        if (rand()%5){ color(couleur(),couleurFond); gotoxy(x+1,y+4); cout << "o"; }
       // if (rand()%5){ color(couleur(),couleurFond); gotoxy(x+5,y+4); cout << "o"; }
        if (rand()%5){ color(couleur(),couleurFond); gotoxy(x+9,y+4); cout << "o"; }

}
//-------------------------------------------------------------------------------------
void DessinConsole::cerf()
{
    gotoxy(x,y);   cout << "          ()";
    gotoxy(x,y+1); cout << "          ))    ((";
    gotoxy(x,y+2); cout << "         //      \\";
    gotoxy(x,y+3); cout << "        | \\____// |";
    gotoxy(x,y+4); cout << "       \\~/ ~    ~\\/~~/";
    gotoxy(x,y+5); cout << "        (|    _/o  ~~";
    gotoxy(x,y+6); cout << "         /  /     ,|";
    gotoxy(x,y+7); cout << "oh deer (~~~)__.-\\ |";
    gotoxy(x,y+8); cout << "         ``~~    | |";
    gotoxy(x,y+9); cout << "            |      | |";
}
void DessinConsole::mec1()
{
    gotoxy(x,y);   cout << "       \\\\\\||||||////       ";
    gotoxy(x,y+1); cout << "        \\\\  ~ ~  //        ";
    gotoxy(x,y+2); cout << "         (  @ @  )         ";
    gotoxy(x,y+3); cout << "______ oOOo-(_)-oOOo_______";
    gotoxy(x,y+4); cout << ".......                    ";
    gotoxy(x,y+5); cout << "_____________Oooo._________";
    gotoxy(x,y+6); cout << "  .oooO     (   )          ";
    gotoxy(x,y+7); cout << "  (   )      ) /           ";
    gotoxy(x,y+8); cout << "   \\ (     (_/             ";
    gotoxy(x,y+9); cout << "    \\_)";
}

//---------------------------------------------------------
void DessinConsole::panneau()
{
    gotoxy(x,y);   cout << "      \\|||/    ";
    gotoxy(x,y+1); cout << "      (o o)     ";
    gotoxy(x,y+2); cout << "~~ooO~~(_)~~~~~~~";
    gotoxy(x,y+3); cout << "|               |";
    gotoxy(x,y+4); cout << "|   BTS Snir    |";
    gotoxy(x,y+5); cout << "|               |";
    gotoxy(x,y+6); cout << "~~~~~~~~~~~ooO~~~";
    gotoxy(x,y+7); cout << "     |__|__|     ";
    gotoxy(x,y+8); cout << "      || ||      ";
    gotoxy(x,y+9); cout << "     ooO Ooo     ";
}

//---------------------------------------------------------
void DessinConsole::lapin()
{
    gotoxy(x,y);   cout << " (!)_(!)";
    gotoxy(x,y+1); cout << " (='.'=) ";
    gotoxy(x,y+2); cout << "    #    ";
    gotoxy(x,y+3); cout << "(   .   )";
    gotoxy(x,y+4); cout << "(\")__(\")";

}

//---------------------------------------------------------
void DessinConsole::bart()
{
    gotoxy(x,y);   cout << " |\\/\\/\\/|";
    gotoxy(x,y+1); cout << " |      |";
    gotoxy(x,y+2); cout << " |      |";
    gotoxy(x,y+3); cout << " | (o)(o)";
    gotoxy(x,y+4); cout << " c      _)";
    gotoxy(x,y+5); cout << "  | ,___|";
    gotoxy(x,y+6); cout << "  |    /";
    gotoxy(x,y+7); cout << " /_____\\";
    gotoxy(x,y+8); cout << "/       \\";
}

//---------------------------------------------------------
void DessinConsole::tete()
{
    gotoxy(x,y);    cout << "     _/       \\_      ";
    gotoxy(x,y+1);  cout << "    / |       | \\     ";
    gotoxy(x,y+2);  cout << "   /  |__   __|  \\    ";
    gotoxy(x,y+3);  cout << "  |__/((o| |o))\\__|   ";
    gotoxy(x,y+4);  cout << "  |      | |      |   ";
    gotoxy(x,y+5);  cout << "  |\\     |_|     /|   ";
    gotoxy(x,y+6);  cout << "  | \\           / |   ";
    gotoxy(x,y+7);  cout << "   \\| /  ___  \\ |/    ";
    gotoxy(x,y+8);  cout << "    \\ | / _ \\ | /     ";
    gotoxy(x,y+9);  cout << "     \\_________/      ";
    gotoxy(x,y+10); cout << "      _|_____|_       ";
    gotoxy(x,y+11); cout << " ____|_________|____  ";
    gotoxy(x,y+12); cout << "/                   \\ ";
}
//---------------------------------------------------------
void DessinConsole::snake()
{
    gotoxy(x,y);    cout << "           /^\\/^\\" ;
    gotoxy(x,y+1);  cout << "         _|__|  O|" ;
    gotoxy(x,y+2);  cout << "\\/     /~     \\_/ \\" ;
    gotoxy(x,y+3);  cout << " \\____|__________/  \\" ;
    gotoxy(x,y+4);  cout << "         \\_______      \\" ;
    gotoxy(x,y+5);  cout << "                 `\\     \\                 \\" ;
    gotoxy(x,y+6);  cout << "                   |     |                  \\" ;
    gotoxy(x,y+7);  cout << "                  /      /                    \\" ;
    gotoxy(x,y+8);  cout << "                 /     /                       \\\\" ;
    gotoxy(x,y+9);  cout << "               /      /                         \\ \\" ;
    gotoxy(x,y+10); cout << "              /     /                            \\  \\" ;
    gotoxy(x,y+11); cout << "            /     /             _----_            \\  \\" ;
    gotoxy(x,y+12); cout << "           /     /           _-~      ~-_         |   |" ;
    gotoxy(x,y+13); cout << "          (      (        _-~    _--_    ~-_     _/   |" ;
    gotoxy(x,y+14); cout << "           \\      ~-____-~    _-~    ~-_    ~-_-~    /" ;
    gotoxy(x,y+15); cout << "             ~-_           _-~          ~-_       _-~" ;
    gotoxy(x,y+16); cout << "                ~--______-~                ~-___-~" ;
}

void DessinConsole::ordinateur()
{
    gotoxy(x,y);    cout << "                                         ,---------,";
    gotoxy(x,y+1);  cout << "     ,-----------------------,         ,\"        ,\"|";
    gotoxy(x,y+2);  cout << "    +-----------------------+|       ,\"        ,\"  | ";
    gotoxy(x,y+3);  cout << "    |  .-----------------.  ||      +---------+    |   ";
    gotoxy(x,y+4);  cout << "    |  |                 |  ||      | -==----'|    |   ";
    gotoxy(x,y+5);  cout << "    |  |  I LOVE DOS!    |  ||      |         |    |   ";
    gotoxy(x,y+6);  cout << "    |  |  Bad command or |  ||/-----|`---=    |    |   ";
    gotoxy(x,y+7);  cout << "    |  |  C:\\>_          |  ||    ,/|==== ooo |    ;   ";
    gotoxy(x,y+8);  cout << "    |  |                 |  ||   // |(((( [33]|  ,\"   ";
    gotoxy(x,y+9);  cout << "    |  `-----------------'  |, .;'| |((((     | ,\"    ";
    gotoxy(x,y+10); cout << "    +-----------------------+ ;;  | |         |,\"     ";
    gotoxy(x,y+11); cout << "       /_)______________(_/  //'  | +---------+        ";
    gotoxy(x,y+12); cout << "   __________________________/____ `,                  ";
    gotoxy(x,y+13); cout << "  /  oooooooooooooooo  .o.  oooo /,  \\,\"-----------    ";
    gotoxy(x,y+14); cout << " / ==ooooooooooooooo==.o.  ooo= //  ,`\\--{)B     ,\"    ";
    gotoxy(x,y+15); cout << "/_==__==========__==_ooo__ooo=_/'  /___________,\"       ";
    gotoxy(x,y+16); cout << "`-----------------------------'                           ";

}
