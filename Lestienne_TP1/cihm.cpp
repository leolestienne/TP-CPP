#include "cihm.h"

#include <iostream> /* bibliothèque d'entrees-sorties standard en C++, la ligne
    montre l'utilisation d'une commande du préprocesseur (#include) qui permet d'inclure
    un fichier dont le nom est passé en argument. Les symboles < et > indiquent qu'il faut
    rechercher ce fichier dans les répertoires connus du compilateur. Le préprocesseur
    remplacera cette commande #include par le contenu du fichier iostream utile pour
    notre application pour la fonction cout. */

#include <conio.h>

using namespace std;

CIhm::CIhm()
{
}

void CIhm::fonctionPrincipale()
{
    int a,b,calcul;
    int u;
    char v;
    cout <<"Bonjour\n\n";
    a = 10;
    b = 50;
    u = 65;
    v = 'A';
    calcul = (a+b)*2;
    cout <<"Voici le résultat :"<<calcul<<"\n\n";
    cout <<"premier affichage de u :"<<u<<endl;
    cout <<" deuxieme affichage de u :"<<(char)u<<"\n\n";
    cout <<"premier affichage de v :"<<v<< endl;
    cout <<"deuxieme affichage de v :"<<(int)v<<"\n\n";
    cout <<"Pour continuer frapper une touche..."<<endl<<endl;
    getch();


}
void CIhm::fonctionExercice2()
{
    int c;
    c = 322;
    cout<<(char)c<<endl;
    cout<<(int)c<<endl;
    cout<<oct<<(int)c<<endl;
    cout<<hex<<(int)c<<endl;
    cout<<dec<<(int)c<<endl;
    cout<<"Pour continuer frapper une touche ..."<<endl<<endl;
    getch();

}


void CIhm::fonctionExercice3()
{
    char c = 'A';
    cout<<"decimal ="<<(int)c<<"ASCII="<<c<<endl;
    cout<<"pour continuer frapper une touche"<<endl;
    getch();

}

void CIhm::fonctionExercice4()
{
    int a,b;
    a = -21430;
    b = 4782;

}
