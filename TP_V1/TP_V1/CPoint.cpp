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


//BUT : Afficher les attributs membres de la classe CPoint
//ENTREE : /
//SORTIE : Affichage des attributs membres 
void CPoint::afficher() const
{
	cout << "X : " << this->m_fltX << endl;
	cout << "Y : " << this->m_fltY << endl;
}



