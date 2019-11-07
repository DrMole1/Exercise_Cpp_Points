//=================================================
// Fichier : CPoint.cpp
// Classe : CPoint
// Date : 07/11/2019
// Auteur : Prob Bastien
//=================================================


//Implémentation de la bibliothèque
#include "CPoint.h"



//BUT : Constructeur de la classe CPoint
//ENTREE : Deux float
//SORTIE : Une instance de la classe CPoint
CPoint::CPoint(float fltX, float fltY)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
}


//BUT : Opérer une translation entre les coordonnées du point et les float fournis par l'utilisateur
//ENTREE : Deux float
//SORTIE : Les attributs membres de l'instance modifiés
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


//BUT : Getter de l'ordonnée du point
//ENTREE : /
//SORTIE : L'attribut ordonnée du point
float CPoint::getOrdonnee() const
{
	return this->m_fltY;
}






