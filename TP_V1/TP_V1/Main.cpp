//Impl�mentation des biblioth�ques
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

using namespace std;


//BUT : Cr�er une instance d'un point, afficher ses coordonn�es, le translater, puis r�afficher ses coordonn�es
//ENTREE : Coordonn�es du point
//SORTIE : Affichage de ses attributs
int main()
{
	//Cr�ation de l'instance
	CPoint ptMonPoint(4.5, 2.0);

	//Affichage
	ptMonPoint.afficher();

	//Translater
	ptMonPoint.deplacer(1.5, 1.0);

	//Affichage
	ptMonPoint.afficher();

	system("pause");
	return 0;
}
