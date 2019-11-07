//===========================================
// Fichier : CPoint.h
// Classe : CPoint
// Description : Gestion des points dans un plan
// Attributs : float X, float Y
// Auteur : Prob Bastien
// Date : 07/11/2019
//===========================================

#pragma once

//Déclaration de la classe CPoint

class CPoint
{
//Déclaration des attributs membres en privé
private:

	float m_fltX;
	float m_fltY;

//Déclaration des méthodes membres en publique (signatures)
public:

	CPoint(float fltX, float fltY);
	void deplacer(float fltX, float fltY);
	float getAbscisse() const;
	float getOrdonnee() const;
};
