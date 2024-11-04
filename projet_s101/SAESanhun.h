#ifndef SAESANHUN_H_INCLUDED
#define SAESANHUN_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

const vector<string> ARTEFACT ={"Vide","Livre","Bourse","Joyau","Sceptre","Collier","Graal"};
const int NBARTEFACT = ARTEFACT.size();
const int VIDE = 0;
const vector<int> VALEUR  ={0,1,2,3,5,8,10};
const vector<int> QUANTITE = {0,6,4,3,2,1,1};


void affiche(const vector<int> &sentier,const vector<int> &sac1,const vector<int> &sac2,int pos1, int pos2, int tour);
//Affiche le sentier et le sac de chaque joueur

//void joueurN(vector<int> &sentier,const vector<int> &valeur,const vector<int> &j1,vector<int> &j2,int pos1, int &pos2);

int somme_entiers(const vector<int> &vect);
//Retourne la somme des entiers d'un vector<int> donné en paramètres

int score(const vector<int> &sac1,const vector<int> &sac2)
//Retourne le score du joueur dont le sac est en premier argument

#endif // SAESANHUN_H_INCLUDED
