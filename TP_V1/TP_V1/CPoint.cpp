//=================================================
// Fichier : CPoint.cpp
// Classe : CPoint
// Date : 07/11/2019
// Auteur : Prob Bastien
//=================================================


//Implémentation de la bibliothèque
#include "CPoint.h"
#include <iostream>

using namespace std;



//BUT : Constructeur de la classe CPoint
//ENTREE : Deux float
//SORTIE : Une instance de la classe CPoint
CPoint::CPoint(float fltX, float fltY)
{
	this->m_fltRho = sqrt(pow(fltX, 2) + pow(fltY, 2));
	this->m_fltTheta = atan(fltY / fltX);
}


//BUT : Opérer une translation entre les coordonnées du point et les float fournis par l'utilisateur
//ENTREE : Deux float
//SORTIE : Les attributs membres de l'instance modifiés
void CPoint::deplacer(float fltX, float fltY)
{
	//Déclaration des variables
	float fltTempX = 0.0;
	float fltTempY = 0.0;

	//Calculs
	fltTempX = (this->m_fltRho * cos(m_fltTheta)) + fltX;
	fltTempY = (this->m_fltRho * sin(m_fltTheta)) + fltY;

	//Affichage
	cout << "X deplace : " << fltTempX << endl;
	cout << "Y deplace : " << fltTempY << endl;
}


//BUT : Getter de l'abscisse du point
//ENTREE : /
//SORTIE : L'attribut abscisse du point
float CPoint::getAbscisse() const
{
	return (this->m_fltRho * cos(m_fltTheta));
}


//BUT : Getter de l'ordonnée du point
//ENTREE : /
//SORTIE : L'attribut ordonnée du point
float CPoint::getOrdonnee() const
{
	return (this->m_fltRho * sin(m_fltTheta));
}


//BUT : Envoie l'homothétie du point
//ENTREE : Le rapport en float
//SORTIE : L'homothétie
void CPoint::homothetie(float fltRapport) const
{
	cout << "X selon homothetie : " << this->getAbscisse() * fltRapport << endl;
	cout << "Y selon homothetie : " << this->getOrdonnee() * fltRapport << endl;
}


//BUT : Envoie les coordonnées du nouveau point par rapport à l'angle
//ENTREE : L'angle en float
//SORTIE : Les coordonnées du point selon sa rotation
void CPoint::rotation(float fltAngle) const
{
	//Déclaration des constantes
	const double PI = 3.14159;
	const int ANGLEPLAT = 180;
	const float ORIGINE = 0.0;

	//Déclaration des variables
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


//BUT : Envoie le rho, concernant les coordonnées polaires
//ENTREE : /
//SORTIE : Le rho
//NOTE : Utilisation de pythagore
void CPoint::rho() const
{
	cout << "Rho (coordonnees polaires) : " << this->m_fltRho << endl;
}


//BUT : Envoie le théta, concernant les coordonnées polaires
//ENTREE : /
//SORTIE : Le théta
//NOTE : Utilisation de la tangente
void CPoint::theta() const
{
	cout << "Theta (coordonnees polaires) : " << this->m_fltTheta << " radians." << endl;
}






