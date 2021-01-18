#ifndef __LABYRINTHE_H__
#define __LABYRINTHE_H__

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <fstream>

#include "Personnage.h"
#include "Plateau.h"
#include "Couloir.h"
#include "Mur.h"
#include "Sortie.h"

using namespace std;

class Labyrinthe
{
protected : 
	int m_nbl, m_nbc;
	Plateau* m_plateau;
	Personnage* m_personnage;

public :

	Labyrinthe(const int& a, const int& b);
	Labyrinthe(const Labyrinthe& l);
	~Labyrinthe();

	void afficher();
	void deplacerPersoDroite(void);
	void deplacerPersoGauche(void);
	void deplacerPersoBas(void);
	void deplacerPersoHaut(void);
	bool fini(void);

};

#endif