#include <iostream>
#include <vector>
#include "SAESanhun.h"
#include "joueurs.h"

using namespace std;

int main() {
    vector<int> sentier;
    sentier = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};

	int pos1,pos2;
	pos1 = pos2 = sentier.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);
    // jeu a deux joueur humain
    jeu(sentier,pos1,pos2,sac1,sac2);
    // jeu a un humain et IA
    //jeu_ia_aleatoire(sentier,pos1,pos2,sac1,sac2);
    return 0;
}
