#ifndef JOUEURS_H_INCLUDED
#define JOUEURS_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

void jeu_ia_aleatoire(vector<int> &sentier, int &pos1, int &pos2, vector<int> &sac1, vector<int> &sac2);

void joueur3(vector<int> &sentier,const vector<int> & j1,vector<int> &j2,int i1, int &i2);

void joueur4(vector<int> &sentier,const vector<int> & j1,vector<int> &j2,int i1, int &i2);

#endif // JOUEURS_H_INCLUDED
