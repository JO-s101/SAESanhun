#include <iostream>
#include <vector>
using namespace std;

const vector<string> ARTEFACT ={"Vide","Livre","Bourse","Joyau","Sceptre","Collier","Graal"};
const int NBARTEFACT = ARTEFACT.size();
const int VIDE = 0;
const vector<int> VALEUR  ={0,1,2,3,5,8,10};
const vector<int> QUANTITE = {0,6,4,3,2,1,1};

void affiche(const vector<int> &sentier,const vector<int> &sac1,const vector<int> &sac2,int pos1, int pos2, int tour);

void joueurN(vector<int> &sentier,const vector<int> &valeur,const vector<int> &j1,vector<int> &j2,int pos1, int &pos2);

int main() {
    vector<int> sentier;
    sentier1 = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};
    sentier2 = {1,1,1,1,2,2,1,3,1,1,2,3,3,4,5,4,6};

	int pos1,pos2;
	pos1 = pos2 = sentier.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    cout << "je teste la fonction affiche"<<endl;
    affiche(sentier1);
    affiche(sentier2);

    return 0;
}
