#ifndef __MUR_H__
#define __MUR_H__

#include "ObjetGraphiqueFixe.h"

class Mur : public ObjetGraphiqueFixe
{
public :
	Mur(const int& i=0, const int& j=0, const int& type=2);

	void affiche(void) const;
};

#endif

	// type = 1 -> sortie
	// type = 2 -> mur 
	// type = 3 -> couloir