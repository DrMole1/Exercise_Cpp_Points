//=================================================
// Fichier : CPoint.cpp
// Classe : CPoint
// Date : 07/11/2019
// Auteur : Prob Bastien
//=================================================


//Impl�mentation de la biblioth�que
#include "CPoint.h"
#include <iostream>

using namespace std;



//BUT : Constructeur de la classe CPoint
//ENTREE : Deux float
//SORTIE : Une instance de la classe CPoint
CPoint::CPoint(float fltX, float fltY)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
}


//BUT : Op�rer une translation entre les coordonn�es du point et les float fournis par l'utilisateur
//ENTREE : Deux float
//SORTIE : Les attributs membres de l'instance modifi�s
void CPoint::deplacer(float fltX, float fltY)
{
	this->m_fltX += fltX;
	this->m_fltY += fltY;
}


//BUT : Getter de l'abscisse du point
//ENTREE : /
//SORTIE : L'attribut abscisse du point
float CPoint::getAbscisse() const
{
	return this->m_fltX;
}


//BUT : Getter de l'ordonn�e du point
//ENTREE : /
//SORTIE : L'attribut ordonn�e du point
float CPoint::getOrdonnee() const
{
	return this->m_fltY;
}


//BUT : Envoie l'homoth�tie du point
//ENTREE : Le rapport en float
//SORTIE : L'homoth�tie
void CPoint::homothetie(float fltRapport) const
{
	cout << "X selon homothetie : " << this->getAbscisse() * fltRapport << endl;
	cout << "Y selon homothetie : " << this->getOrdonnee() * fltRapport << endl;
}


//BUT : Envoie les coordonn�es du nouveau point par rapport � l'angle
//ENTREE : L'angle en float
//SORTIE : Les coordonn�es du point selon sa rotation
void CPoint::rotation(float fltAngle) const
{
	//D�claration des constantes
	const double PI = 3.14159;
	const int ANGLEPLAT = 180;
	const float ORIGINE = 0.0;

	//D�claration des variables
	double xM = 0.0;
	double yM = 0.0;
	double x = 0.0;
	double y = 0.0;

	//Calculs
	fltAngle *= PI/ANGLEPLAT;
	xM = this->getAbscisse() - ORIGINE;
	yM = this->getOrdonnee() - ORIGINE;
	x = xM * cos(fltAngle) + yM * sin(fltAngle) + ORIGINE;
	y = -xM * sin(fltAngle) + yM * cos(fltAngle) + ORIGINE;

	//Affichage
	cout << "X apres rotation : " << x << endl;
	cout << "Y apres rotation : " << y << endl;
}


//BUT : Envoie le rho, concernant les coordonn�es polaires
//ENTREE : /
//SORTIE : Le rho
//NOTE : Utilisation de pythagore
void CPoint::rho() const
{
	cout << "Rho (coordonnees polaires) : " << sqrt(pow(this->getAbscisse(), 2) + pow(this->getOrdonnee(), 2)) << endl;
}


//BUT : Envoie le th�ta, concernant les coordonn�es polaires
//ENTREE : /
//SORTIE : Le th�ta
//NOTE : Utilisation de la tangente
void CPoint::theta() const
{
	cout << "Theta (coordonnees polaires) : " << atan(this->getOrdonnee() / this->getAbscisse()) << " radians." << endl;
}






