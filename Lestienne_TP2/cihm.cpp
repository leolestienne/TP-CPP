#include "cihm.h"

CIhm::CIhm()
{

}

//--------------------------------------------------------------------------------------------------------------
/*
 Algorithme : calcul d'une clé de contrôle
                méthode calculInsee() de la classe CIhm
 Auteur : Léo Lestienne
 Date : 23 Septembre 2021

 Variables :
            sex, annee, mois = entier
            lieu = entier
            numordre = entier
            cle = entier
            nir = entier 64 bits


début:  effacer l'écran
        afficher: "Calcul de la clé des numéros INSEE"
        afficher: "entrez 1 si vous etes un homme ou 2 si vous etes une femme"
        saisir sex
        afficher: "entrez les deux derniers chiffres de votre année de naissance"
        saisir annee
        afficher: "entrez votre numéros de mois de naissance en deux chiffres ( exemple : aout = 08)"
        saisir mois
        afficher: "entrez le COG de votre lieu de naissance"
        saisir lieu
        afficher: "entrez votre numéro d'ordre"
        saisir numordre

        nir <- sex * 10^12 + annee * 10^10 + mois * 10^8 + lieu * 10^3 + numordre

        cle <- 97 - nir % 97

 fin

*/
void CIhm::calculInsee()
{
    int sex;
    int annee;
    int mois;
    int lieu;
    int numordre;
    int cle;
    long long nir;

    system("CLS");

    cout<< "Calcul de la cle des numeros INSEE"<<endl<<endl;
    cout<< "Entrez 1 si vous etes un homme ou 2 si vous etes une femme ";
    cin>> sex;
    do
    {
        cout<< "entrez 1 si vous etes un homme ou 2 si vous etes une femme";
        cin>> sex;
    }while(sex!=1 && sex!=2);


    cout<< "entrez les deux derniers chiffre de votre date de naissance ";
    cin>> annee;
    cout<< "entrez votre numero de mois de naissance en deux chiffres ( exemple : aout = 08) ";
    cin>> mois;
    cout<< "Entrez le COG de votre lieu de naissance ";
    cin>> lieu;
    cout<< "Entrez votre numero d'ordre ";
    cin>> numordre;

    nir = sex * pow(10,12) + annee * pow(10,10) + mois * pow(10,8) + lieu * pow(10,3) + numordre;
    cout<< "votre numero Insee est : "<<nir<<endl<<endl;
    cle = 97 - nir % 97;
    if (cle < 10)
    {
        cout<< "votre clef de controle est : 0"<<cle<<endl<<endl;

    }
    else
    {
        cout<< "votre clef de controle est : "<<cle<<endl<<endl;
    }


}
