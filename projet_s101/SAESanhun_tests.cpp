#include "SAESanhun.h"


int main() {

    vector<int> sentier;
    vector<int> sentier1 = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};
    vector<int> sentier2 = {1,1,1,1,2,2,1,3,1,1,2,3,3,4,5,4,6};

	int pos1,pos2;
	pos1 = pos2 = sentier.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    cout << "Test de la fonction somme" << endl;
    vector<int> vect1={0,2,4,-6,9};
    cout << somme_entiers(vect1) << endl;

    cout << "Test de la fonction affiche"<<endl;
    affiche(sentier1,sac1,sac2,9,2,1);
    //affiche(sentier1,sac1,sac2,5,2,2);


    return 0;
}
