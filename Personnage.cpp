#include "Personnage.h"

Personnage::Personnage(const int& i, const int& j):ObjetGraphiqueMobile(i,j,3)
{
}

void Personnage::affiche(void) const
{
	cout << 'P';
}
