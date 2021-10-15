#include "cihmboucle.h"
#include "dessinconsoleV9.h"
#include "consoleJR.h"



CIhmBoucle::CIhmBoucle()
{
    menu();
}
//-----------------------------------------------------------------------------------------------------
/*
        Algorithme de la méthode de présentation des exercices de la classe CIhmBoucle:
        Auteur: Lestienne
        Date: 30 Septembre 2021
        Variable:
                code = caractère
        début
            répéter
                {
                    effacer l'écran
                    afficher: "( exercices pour la mise en oeuvre des boucles en C++"
                    afficher: "Lestienne-Léo"
                    afficher: "a - Exercice1 - calcul de la somme, du produit et de la moyenne"
                    afficher: "b - Exercice2 - division par soustraction successives"
                    afficher: "c - Exercice3 - calcul de la factorielle d'un entier"
                    afficher: "d - Exercice4 - afficher un triangle isocèle formé d'étoiles"
                    afficher: "e - Exercice5 - afficher en boucle les dessins de la calsse DessinConsole"
                    saisir code
                    si ( code = 'a' )
                            alors appel de la méthode calculSPM()//execution du 1er exercice
                    si ( code = 'b' )
                            alors appel de la méthode calculDivisionParSoustraction()//execution du 2e exercice
                    si ( code = 'c' )
                            alors appel de la méthode calculFactorielle()//execution du 3e exercice
                    si ( code = 'd' )
                            alors appel de la méthode triangleIsocele()//execution du 4e exercice
                    si ( code = 'e' )
                            alors appel de la méthode afficherDessinConsole()//execution du 5e exercice

                } jusqu'à ( code = 'q' )

        fin
 */
void CIhmBoucle::menu()
{
    char code ;
    do
    {
    system("cls");
    cout << " 5 exercices pour la mise en oeuvre des boucles en C++\n";
    cout << " =============================================\n" << endl ;
    cout << " Lestienne - Leo \n\n" << endl ;
    cout << " a - Exercice 1 - calcul de la somme, du produit et de la moyenne\n\n\n";
    cout << " b - Exercice 2 - Division par soustractions successives\n\n\n";
    cout << " c - Exercice 3 - Calcul de la factorielle d'un entier\n\n\n";
    cout << " d - Exercice 4 - Afficher un triangle isocele forme d'etoiles\n\n\n";
    cout << " e - Exercice 5 -Afficher en boucle les dessins de la classe DessinConsole\n\n\n";
    cout << " q - Quitter le programme\n\n\n\n";
    cout << " Selectionner a, b, c ,d ,e ou q ? : ";
    code = getch( );
    if (code == 'a') calculSPM( ) ; // si la condition est vrai, on exécute la méthode calculSPM( )
    if (code == 'b') calculDivisionParSoustraction( ) ;
    if (code == 'c') calculFactorielle( ) ;
    if (code == 'd') triangleIsocele( ) ;
    if (code == 'e') afficherDessinConsole( ) ;
    } while ( code != 'q' ) ;
}
//----------------------------------------------------------------------------------------------
/*
    Algorithme de la méthode calculSPM qui calcule les sommes, produits et moyenne de N nombres entiers
    Auteur: Léo Lestienne
    Date: 30/09/2021
    Variables:
            n = entier
            valeur = entier
            compteur = entier
            somme = entier
            produit = entier
            moyenne =décimale
    début
            afficher: "entrez le nombre de chiffres à utiliser "
            saisir n
            compteur <- 1
            somme <- 0
            produit <- 1
            moyenne <- 0
            répéter{
                    afficher: "entrez la valeur numéro"compteur" "
                    saisir valeur
                    somme <- somme + valeur
                    produit <-
                    moyenne <- somme / compteur
                    }jusqu'à compteur == n
            afficher: " la somme est: "somme
            afficher: " le produit est: "produit
            afficher: "la moyenne est: "moyenne
            system pause

    fin
*/
void CIhmBoucle::calculSPM()
{
    int compteur, somme, produit, n, valeur;
    float moyenne;
    compteur = 1;
    moyenne = 0;
    somme = 0;
    produit = 1;
    n = 1;
    system("cls");
    cout<< "entrez le nombre de chiffres à utiliser";
    cin>> n;
    do
    {
        cout<< "entrez la valeur numero: "<<compteur<<endl;
        cin>> valeur;
        somme = somme + valeur;
        produit = produit * valeur;
        compteur = compteur + 1;
    }while(compteur <= n);
    moyenne = (float)somme / n;
    cout<<"la somme est: "<<somme<<endl;
    cout<<"le produit est: "<<produit<<endl;
    cout<<"la moyenne est: "<<moyenne<<endl;

    system("pause");
}
//----------------------------------------------------------------------------------------------

/*
    Algorithme de la méthode calculDivisionParSoustraction qui fait une division par soustraction succesive.
    Auteur: Léo Lestienne
    Date: 01/10/2021
    variables: dividende, diviseur, reste, quotient, compteur <- entier

    Début
        effacer l'écran
        afficher "entrez le dividende : "
        saisir dividende
        afficher "entrez le diviseur : "
        saisir diviseur
        compteur <- 0

        faire
            diviende <- dividende - diviseur
            compteur <- compteur + 1
        jusqu'à dividende <= diviseur

        reste <- dividende
        quotient <- compteur
        afficher "le quotient est : "
        afficher "le reste est : "

        pause systeme


 */



void CIhmBoucle::calculDivisionParSoustraction()
{
    int dividende, diviseur, reste, quotient, compteur;


    system("cls");
    cout<< "entrez le dividende : ";
    cin>> dividende;
    cout<< "entrez le diviseur : ";
    cin>> diviseur;
    compteur = 0;

    do
    {
        dividende = dividende - diviseur;
        compteur == compteur++;
    }while( dividende >= diviseur );

    reste = dividende;
    quotient = compteur;
    cout<< "le quotient est: "<<quotient<<endl;
    cout<< "le reste est: "<<reste<<endl;


    system("pause");
}
//----------------------------------------------------------------------------------------------
/*
    Algorithme de la méthode calculFactorielle qui calcule la factorielle d'un nombre donné
    Auteur :  Léo Lestienne
    Date : 01/10/2021

    Variables : compteur, n = entier
                result = entier 64 bits

    début
        effacer l'écran
        afficher "entrez un entier naturel : "
        saisir n
        compteur <- n
        result <- 1

        faire
            result <- result * compteur
            compteur <- compteur - 1
            si ( n == 0) result <- 1
        jusqu'a compteur = 0

        afficher "la factorielle est : ",result

        pause systeme




*/





void CIhmBoucle::calculFactorielle()
{
    int compteur, n;
    long long result;

    system("cls");
    cout<< "entrez un entier naturel (max 20) : ";
    cin>> n;
    compteur = n ;
    result = 1;


    do{
        result = result * (compteur);
        compteur = compteur - 1;
        if(n == 0) result = 1;
    }while(compteur > 0);
    cout<< "la factorielle est : "<<(long long)result<<endl;

    system("pause");
}
//----------------------------------------------------------------------------------------------

/*
   Algorithme de la méthode triangleIsocele qui permet de faire un triangle isocele composer de * avec un nombre de ligne donné
   auteur : Léo Lestienne
   Date : 01/10/2021

   Variables : i, j, espace, ligne <- entier

   début
        effacer écran
        afficher "entrez le nombre de ligne"
        saisir ligne
        pour i <- 1 , i <= ligne , i + 1 j <- 0
            pour espace <- 1 , espace <= ligne - i , espace + 1
                afficher " "
            jusqu'a ce que j == 2*i-1
            aller a la ligne

        systeme pause




*/



void CIhmBoucle::triangleIsocele()
{
    system("cls");
    int i, j, espace, ligne;
    j = 0;
    cout<< "entrez le nombre de ligne: ";
    cin>> ligne;
    for(i=1; i<= ligne; ++i, j = 0)
    {
        for(espace = 1; espace <= ligne - i; ++espace)
        {
            cout<<" ";

        }
        while(j != 2*i-1)
        {
            cout<<"*";
            ++j;
        }
        cout<<"\n";
    }



    system("pause");
}
//----------------------------------------------------------------------------------------------

void CIhmBoucle::afficherDessinConsole()
{

    DessinConsole images;
    char ch;
    while(1)
    {
        system("cls");
        images.ordinateur();
        if (kbhit() ){
            ch = getch();
            if (char(ch) == 'q')
                break;
        }
        Sleep(2000);
        system("cls");
        images.cerf();
        if (kbhit() ){
            ch = getch();
            if (char(ch) == 'q')
                break;
        }
        Sleep(2000);
        system("cls");
        images.panneau();
        if (kbhit() ){
            ch = getch();
            if (char(ch) == 'q')
                break;
        }
        Sleep(2000);
        system("cls");
        images.tete();
        if (kbhit() ){
            ch = getch();
            if (char(ch) == 'q')
                break;
        }
        Sleep(2000);
        system("cls");
        images.mec1();
        if (kbhit() ){
            ch = getch();
            if (char(ch) == 'q')
                break;
        }
        Sleep(2000);
        system("cls");
        images.snake();
        if (kbhit() ){
            ch = getch();
            if (char(ch) == 'q')
                break;
        }
        Sleep(2000);
        system("cls");
        images.bart();
        if (kbhit() ){
            ch = getch();
            if (char(ch) == 'q')
                break;
        }
        Sleep(2000);

    }

}




