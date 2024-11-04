#include <iostream>
#include <vector>
#include "joueur.h"
#include "SAEFunction.h"

using namespace std;

int main() {
    vector<int> sentier;
    vector<int> sentier1 = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};
    vector<int> sentier2 = {1,1,1,1,2,2,1,3,1,1,2,3,3,4,5,4,6};

	int tour;
	int pos1,pos2;
	pos1 = pos2 = sentier.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    cout << "je teste la fonction affiche" <<endl;
    affiche(sentier1, sac1, sac2, pos1, pos2, tour);
    affiche(sentier2, sac1, sac2, pos1, pos2, tour);
    if (verif)
        cout << "bon" << endl;

    return 0;
}
