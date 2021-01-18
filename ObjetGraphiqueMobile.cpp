#include "ObjetGraphiqueMobile.h"

ObjetGraphiqueMobile::ObjetGraphiqueMobile(const int& i, const int& j, const int& type):ObjetGraphique(i,j,type)
{
}

void ObjetGraphiqueMobile::deplacerDroite(void)
{
	m_j += 1;
}

void ObjetGraphiqueMobile::deplacerGauche(void)
{
	m_j -= 1;
}

void ObjetGraphiqueMobile::deplacerHaut(void)
{
	m_i -= 1;
}

void ObjetGraphiqueMobile::deplacerBas(void)
{
	m_i += 1;
}
