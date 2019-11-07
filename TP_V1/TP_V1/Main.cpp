//Implémentation des bibliothèques
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

using namespace std;


//BUT : Créer une instance d'un point, afficher ses coordonnées, le translater, puis réafficher ses coordonnées
//ENTREE : Coordonnées du point
//SORTIE : Affichage de ses attributs
int main()
{
	//Création de l'instance
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
