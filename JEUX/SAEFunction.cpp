#include <iostream>
#include <vector>
#include "SAEFunction.h"

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

/// Sous-programme qui v�rifie la bonne initialisation du sentier
bool verif(vector<int> &sentier, vector<string> &ARTEFACT, vector<int> &QUANTITE){
    bool valide1 = true;
    bool valide2 = true;
    // Sort de la boucle si l'artefact n'existe pas
    while (valide1){
            int i = 1;
            valide1 = (sentier[i] <= ARTEFACT.size());
            i++;
    }
    int k = 1;
    int qte = 1;
    // Sort de la boucle si la quantit� d'artefact n'est pas correcte
    while (valide2){
        for (int i = 0; i < sentier.size(); i++){
            if (sentier[i] = k)
                qte++;
        }
        valide2 = (qte <=10 && qte >= 1);
        k++;
    }
    bool valide = (valide1 && valide2);
    return valide;
}

void tour(vector<int> &sentier, vector<string> &ARTEFACT, int &pos1, int &pos2, vector<int> sac1, vector<int> sac2){
    while (pos1 != 0 && pos2 != 0)
        int step = 0;
        cout << "Le joueur 1 avance de combien de case ? ";
        cin >> step;
        pos1 -= step;
        sac1[sentier[pos1]] += 1;
        cout << "Le joueur 2 avance de combien de case ? ";
        cin >> step;
        pos2 -= step;
        sac2[sentier[pos2]] += 1;
        cout << affiche << endl;
}
