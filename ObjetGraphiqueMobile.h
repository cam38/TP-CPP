#ifndef __OBJETGRAPHIQUEMOBILE_H__
#define __OBJETGRAPHIQUEMOBILE_H__


#include "ObjetGraphique.h"

class ObjetGraphiqueMobile : public ObjetGraphique
{
public :

	ObjetGraphiqueMobile(const int& i=0, const int& j=0, const int& type=0);

	void deplacerDroite(void);
	void deplacerGauche(void);
	void deplacerHaut(void);
	void deplacerBas(void);
};

#endif