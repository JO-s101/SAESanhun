#include "SAESanhun.h"

void display_vector_int(const vector<int> &vect){
    //Affiche un vecteur d'entiers
    cout << "{";
    for (int i=0;i<vect.size()-1;i++){        cout << vect[i] << ",";
    }
    cout << vect.back() << "}" << endl;
}

void test_somme_entiers(){
    cout << "Test de la fonction somme_entiers" << endl;
    cout << "\tSomme d'entiers positifs : {2,1,0,7}" << endl;
    vector<int> vect_positif = {2,1,0,7};
    cout << "\tResultat : " << somme_entiers(vect_positif) << endl;  //resultat attendu : 10
    cout << "\tSomme d'entiers negatifs : {-6,-8,-3,-3}" << endl;
    vector<int> vect_negatif = {-6,-8,-3,-3};
    cout << "\tResultat : " << somme_entiers(vect_negatif) << endl;  //resultat attendu : -20
    cout << "\tSomme d'entiers positifs et negatifs : {7,8,-4,-5}" << endl;
    vector<int> vect_reels = {7,8,-4,-5};
    cout << "\tResultat : " << somme_entiers(vect_reels)<< endl;  //resultat attendu : 6
    cout << "\n";
}

void test_affiche(vector<int> &sentier1, vector<int> &sentier2, vector<int> &sac1, vector <int> &sac2, int pos1, int pos2){
    cout << "Test de la fonction affiche" << endl;
    cout << "  Avec deux sacs vides (remplis de zeros) et les joueurs sur la case depart :" << endl;
    affiche(sentier1,sac1,sac2,pos1,pos2,1);
    cout << "  Avec un sentier a l'envers" << endl;
    affiche(sentier2,sac1,sac2,sentier2.size(),sentier2.size(),1);
    cout << "  Avec un seul joueur sur le plateau :" << endl;
    affiche(sentier1,sac1,sac2,9,pos2,1);
    cout << "  Avec les deux joueurs sur le plateau :" << endl;
    affiche(sentier1,sac1,sac2,11,7,1);
    cout << "  Avec des sacs remplis :" << endl;
    sac1={0,7,2,0,1,8,0};
    sac2={0,6,2,6,2,1,1};
    affiche(sentier1,sac1,sac2,11,7,1);
    cout << "  Avec le tour du 2e joueur :" << endl;
    affiche(sentier1,sac1,sac2,11,7,2);
    cout << "\n";
}

void test_score(const vector<int> &sac1, const vector<int> &sac2){
    cout << "Test de la fonction score" << endl;
    cout << "Sac du joueur 1 : ";
    display_vector_int(sac1);
    cout << "Sac du joueur 2 : ";
    display_vector_int(sac2);
    cout << "Score du joueur 1 : " << score(sac1,sac2) << endl;   //resultat attendu : 9
    cout << "Score du joueur 2 : " << score(sac2,sac1) << endl;   //resultat attendu : 18
    vector<int> sac_vide(NBARTEFACT,0);
    cout << "Score avec des sacs vides : " << score(sac_vide,sac_vide) << endl; //resultat attendu : 0
    cout << "\n";
}

void test_verification(const vector<int> &sentier_valide, const vector<int> &sentier_invalide){
    cout << "Test de la fonction verification_init" << endl;
    cout << "Avec un sentier correct : ";
    display_vector_int(sentier_valide);
    cout << "Resultat : " << verification_init(sentier_valide) << endl;    //resultat attendu : true(1)
    cout << "Avec un sentier incorrect : ";
    display_vector_int(sentier_invalide);
    cout << "Resultat : " << verification_init(sentier_invalide) << endl;    //resultat attendu : false(0)
}

int main() {
    ///Donnees de test
    //Initialisation des sentiers qui vont servir pour les tests
    vector<int> sentier1 = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};
    vector<int> sentier2 = {1,1,1,1,2,2,1,3,1,1,2,3,3,4,5,4,6};
    vector<int> sentier;
    //Initialisation des positions des joueurs
	int pos1,pos2;
	pos1 = pos2 = sentier1.size();
	//Initialisation des sacs
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    //Test de la fonction somme_entiers
    test_somme_entiers();

    //Test de la fonction affiche
    test_affiche(sentier1,sentier2,sac1,sac2,pos1,pos2);

    //Test de la fonction score
    test_score(sac1,sac2);

    //Test de la fonction verification
    test_verification(sentier1,sentier2);
    return 0;
}
