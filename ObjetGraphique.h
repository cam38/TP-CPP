#ifndef __OBJETGRAPHIQUE_H__
#define __OBJETGRAPHIQUE_H__

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

class ObjetGraphique
{
protected :
	int m_i, m_j, m_type;

	// type = 1 -> sortie
	// type = 2 -> mur 
	// type = 3 -> couloir

public :

	ObjetGraphique(const int& i=0, const int& j=0, const int& type=0);

	int getType(void);
	int getI(void);
	int getJ(void);
	virtual void affiche(void) const = 0;

};

#endif
