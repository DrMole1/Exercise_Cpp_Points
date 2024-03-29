//===========================================
// Fichier : CPoint.h
// Classe : CPoint
// Description : Gestion des points dans un plan
// Attributs : float X, float Y
// Auteur : Prob Bastien
// Date : 07/11/2019
//===========================================

#pragma once

//D�claration de la classe CPoint

class CPoint
{
	//D�claration des attributs membres en priv�
private:

	int m_nNombre;
	float m_fltX;
	float m_fltY;

	//D�claration des m�thodes membres en publique (signatures)
public:

	CPoint(float fltX, float fltY);
	void deplacer(float fltX, float fltY);
	void afficher() const;
	void getNombre();
};