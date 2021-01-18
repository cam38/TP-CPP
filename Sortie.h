#ifndef __SORTIE_H__
#define __SORTIE_H__

#include "ObjetGraphiqueFixe.h"

class Sortie : public ObjetGraphiqueFixe
{
public:
	Sortie(const int& i=0, const int& j=0, const int& type=1);

	void affiche(void) const;
};

	// type = 1 -> sortie
	// type = 2 -> mur 
	// type = 3 -> couloir

#endif 
