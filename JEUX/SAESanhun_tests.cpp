#include <iostream>
#include <vector>
#include "joueurs.h"
#include "SAEFunction.h"

using namespace std;

int main() {
    vector<int> sentier;
    vector<int> sentier1 = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};
    vector<int> sentier2 = {1,1,1,1,2,2,1,3,1,1,2,3,3,4,5,4,6};

	int tour = 0;;
	int pos1,pos2;
	pos1 = pos2 = sentier1.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    if (verif){
        while (pos1 > 0 && pos2 > 0){
            affiche(sentier1, sac1, sac2, pos1, pos2, tour);
            jeu(sentier1, ARTEFACT, pos1, pos2, sac1, sac2);
            tour ++;
        }
    }

    return 0;
}
