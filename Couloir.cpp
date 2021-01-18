#include "Couloir.h"

Couloir::Couloir(const int& i, const int& j, const int& type):ObjetGraphiqueFixe(i,j,3)
{
}

void Couloir::affiche(void) const
{
	cout << ' ';
}

	// type = 1 -> sortie
	// type = 2 -> mur 
	// type = 3 -> couloir
