#ifndef __PLATEAU_H__
#define __PLATEAU_H__

#include "ObjetGraphiqueFixe.h"
#include "ObjetGraphiqueMobile.h"

class Plateau
{
protected : 
	int m_nbl, m_nbc;
	ObjetGraphiqueFixe*** m_plateau;

public : 

	Plateau(const int& nbl=5, const int& nbc=5);
	Plateau(const Plateau& p);
	~Plateau();

	void setCase(int i, int j, ObjetGraphiqueFixe * o);
	ObjetGraphiqueFixe* getCase(int i, int j);
	void afficher(void);
	void afficher(ObjetGraphiqueMobile& o);
};

#endif

