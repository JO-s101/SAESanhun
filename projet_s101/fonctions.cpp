#include <iostream>
#include <vector>
#include "SAESanhun.h"

using namespace std;

int somme_entiers(const vector<int> &vect){
    //Retourne la somme des entiers d'un vector<int> donné en paramètres
    int somme=0;
    for (int i=0;i<vect.size();i++){
        somme+=vect[i];
    }
    return somme;
}

bool verification_init(const vector<int> &sentier){
    //Vérifie la bonne initialisation du sentier
    //Le sentier est bien initialisé si :
    //1) aucune case n'est vide
    //2) chaque case contient un nombre qui correspond a un artefact du vecteur ARTEFACT
    //3) la quantite de chaque artefact correspond au vecteur QUANTITE
    bool valide=true;
    bool quantite_correcte=true; //Verifie la 3e condition
    int i=0;
    //Initialisation du vecteur qui va contenir les quantites
    vector<int> quantite_artefacts(NBARTEFACT,0);
    while(valide&&i<sentier.size()){
        //Verification des condittions 1 et 2
        valide = sentier[i]!=0 && sentier[i]<=NBARTEFACT;
        if (valide){
            //On incremente la quantite de cet artefact de 1
            quantite_artefacts[sentier[i]]+=1;
        }
        i++;
    }
    //On verifie si la quantite de chaque artefact est correcte
    quantite_correcte = (quantite_artefacts==QUANTITE);
    return (valide&&quantite_correcte);
}

void affiche(const vector<int> &sentier,const vector<int> &sac1,const vector<int> &sac2,int pos1, int pos2, int tour){
    //Affiche le sentier et le sac de chaque joueur
    ///Affichage du sentier
    cout << "\t<*> Le sentier <*>" << endl;
    int cases_a_parcourir=0;
    //Position du joueur actuel
    int pos_joueur;
    if (tour==1){
        pos_joueur=pos1;
    }
    else if (tour==2){
        pos_joueur=pos2;
    }
    //Parcours du sentier en partant de la fin et affichage
    //On considère que deux joueurs ne peuvent pas se trouver sur la même case
    //Donc la distance sera 0 pour le joueur dont ce n'est pas le tour
    for (int i=sentier.size()-1;i>=0;i--){
        if (i==pos1){
            cout<<"[0] Joueur 1  |  ";
        }
        else if (i==pos2){
            cout<<"[0] Joueur 2 |  ";
        }
        else{
            if (i<pos_joueur){
            cases_a_parcourir+=1;
            }
            cout<<"["<<cases_a_parcourir<<"] "<<ARTEFACT[sentier[i]]<<" ("<<VALEUR[sentier[i]]<<")"<<"  |  ";
        }
    }
    cout << "\n\n";
    ///Affichage du sac de chaque joueur
    cout << "\tSac\t_1_\t_2_" << endl;
    for (int i=1;i<ARTEFACT.size();i++){
        //on commence à 1 pour ne pas afficher la case "vide"
        cout << ARTEFACT[i] << "\t\t" << " " << sac1[i] << "\t " << sac2[i] << endl;
    }
    cout << "\n\n";
    cout << "C'est le tour du joueur " << tour << endl;
    cout << endl;
}

int score(const vector<int> &sac1,const vector<int> &sac2){
    //Retourne le score du joueur dont le sac est en premier argument
    int resultat=0; //initialisation de la variable resultat
    for (int i=1;i<sac1.size();i++){
        //Si le premier joueur possède plus d'artefacts d'une certaine categorie :
        if (sac1[i]>sac2[i]){
            //Alors on incremente son score de la valeur de cet artefact
            resultat+=VALEUR[i];
        }
    }
    return resultat;
}


