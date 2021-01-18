#include "ObjetGraphique.h"

ObjetGraphique::ObjetGraphique(const int& i, const int& j, const int& type)
{
	m_i = i;
	m_j = j;
	m_type = type;
}

int ObjetGraphique::getType(void)
{
	return m_type;
}

int ObjetGraphique::getI(void)
{
	return m_i;
}

int ObjetGraphique::getJ(void)
{
	return m_j;
}
