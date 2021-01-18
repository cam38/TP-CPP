#ifndef __PERSONNAGE_H__
#define __PERSONNAGE_H__

#include "ObjetGraphiqueMobile.h"

class Personnage : public ObjetGraphiqueMobile
{
public :
	Personnage(const int& i=0, const int& j=0);

	void affiche(void) const;
};

#endif