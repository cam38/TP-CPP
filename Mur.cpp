#include "Mur.h"

Mur::Mur(const int& i, const int& j, const int& type):ObjetGraphiqueFixe(i,j,2)
{
}

void Mur::affiche(void) const
{
	cout << '*';
}

	// type = 1 -> sortie
	// type = 2 -> mur 
	// type = 3 -> couloir