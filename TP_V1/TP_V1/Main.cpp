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

	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			CPoint ptMonPoint1(4.5, 2.0);
			//Affichage
			ptMonPoint1.afficher();

			//Translater
			ptMonPoint1.deplacer(1.5, 1.0);

			//Affichage
			ptMonPoint1.afficher();

			ptMonPoint1.getNombre();
		}
		else if (i == 1)
		{
			CPoint ptMonPoint2(4.5, 2.0);
			//Affichage
			ptMonPoint2.afficher();

			//Translater
			ptMonPoint2.deplacer(1.5, 1.0);

			//Affichage
			ptMonPoint2.afficher();

			ptMonPoint2.getNombre();
		}
		else
		{
			CPoint ptMonPoint3(4.5, 2.0);
			//Affichage
			ptMonPoint3.afficher();

			//Translater
			ptMonPoint3.deplacer(1.5, 1.0);

			//Affichage
			ptMonPoint3.afficher();

			ptMonPoint3.getNombre();
		}

	}

	system("pause");
	return 0;
}