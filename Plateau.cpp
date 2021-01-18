#include "Plateau.h"


Plateau::Plateau(const int& nbc, const int& nbl)
{
	m_nbc = nbc;
	m_nbl = nbl;
	// on initialise m_plateau
	m_plateau = new ObjetGraphiqueFixe **[m_nbl];
	for (int i = 0; i < m_nbl; i++) {
		(m_plateau)[i] = new ObjetGraphiqueFixe *[m_nbc];
	}
}


// constructeur de recopie de plateau
Plateau::Plateau(const Plateau& p)
{
    m_nbl = p.m_nbl;
    m_nbc = p.m_nbc;

    m_plateau = new ObjetGraphiqueFixe **[m_nbl];

	for (int i = 0; i < m_nbl; i++) {
		(m_plateau)[i] = new ObjetGraphiqueFixe * [m_nbc];
	}

	for (int i = 0; i < m_nbl; i++) {
		for (int j = 0; j < m_nbc; j++) {
			*(m_plateau)[i][j] = *p.m_plateau[i][j];
		}
	}

}

// destructeur de plateau
Plateau::~Plateau()
{
	for (int i = 0; i < m_nbl; i++)
	{
		for (int j = 0; j < m_nbc; j++)
		{
			m_plateau[i][j] = NULL;
		}
		delete[] m_plateau[i];
	}
	delete[] m_plateau;
}

// on modifie une case du plateau
void Plateau::setCase(int i, int j, ObjetGraphiqueFixe* o)
{
	m_plateau[i][j] = o;
}

// on retourne une case du plateau
ObjetGraphiqueFixe* Plateau::getCase(int i, int j)
{
	return m_plateau[i][j];	
}

// on affiche le plateau fixe
void Plateau::afficher(void) {

	for (int i = 0;i < m_nbl;i++) {
		for (int j = 0;j < m_nbc;j++) {
			m_plateau[i][j]->affiche();
		}
	}
}

// on affiche le plateau mobile avec la position du personnage
void Plateau::afficher(ObjetGraphiqueMobile& o)
{
	for (int i = 0; i < m_nbl; i++){
		for (int j = 0; j < m_nbc; j++){
			if (i == o.getI() && j == o.getJ())
			{
				o.affiche();
			}
			else
			{
				m_plateau[i][j]->affiche();
			}

		}
		cout << endl;
	}
}

