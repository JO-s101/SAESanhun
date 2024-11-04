#include <iostream>
#include <vector>
#include "SAESanhun.h"
using namespace std;

int main() {
    vector<int> sentier;
    sentier = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};

	int pos1,pos2;
	pos1 = pos2 = sentier.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    vector<int> vect1={0,2,4,-6,9};
    cout << somme_entiers(vect1) << endl;



    return 0;
}
