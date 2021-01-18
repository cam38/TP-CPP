#ifndef __COULOIR_H__
#define __COULOIR_H__

#include "ObjetGraphiqueFixe.h"

class Couloir : public ObjetGraphiqueFixe
{
public:
	Couloir(const int& i=0, const int& j=0, const int& type=3);

	void affiche(void) const;
};

	// type = 1 -> sortie
	// type = 2 -> mur 
	// type = 3 -> couloir

#endif
