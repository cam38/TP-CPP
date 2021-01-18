#include "Sortie.h"

Sortie::Sortie(const int& i, const int& j, const int& type):ObjetGraphiqueFixe(i,j,1)
{
}

void Sortie::affiche(void) const
{
	cout << 'S';
}

	// type = 1 -> sortie
	// type = 2 -> mur 
	// type = 3 -> couloir