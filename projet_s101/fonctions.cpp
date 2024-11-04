#include <iostream>
#include <vector>
#include "SAESanhun.h"
using namespace std;

int somme_entiers(const vector<int> &vect){
    int somme=0;
    for (int i=0;i<vect.size();i++){
        somme+=vect[i];
    }
    return somme;
}

void affiche(const vector<int> &sentier,const vector<int> &sac1,const vector<int> &sac2,int pos1, int pos2, int tour){
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
    for (int i=0;i<ARTEFACT.size();i++){
        cout << ARTEFACT[i] << "\t\t" << " " << sac1[i] << "\t " << sac2[i] << endl;
    }
    cout << "\n\n";
    cout << "C'est le tour du joueur " << tour << endl;
}

int score(const vector<int> &sac1,const vector<int> &sac2){
    int resultat=0;



}

