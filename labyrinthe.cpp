#include "labyrinthe.h"

// constructeur de labyrinthe : on utilise les fichiers
Labyrinthe::Labyrinthe(string nomFichier)
{

	ifstream fichier(nomFichier, ios::in);


	// si l'ouverture réussie
	if (!fichier.fail())
	{
		char c;
		int i = 0, j = 0, pos_j;

		// on lit le nombre de ligne et de colonne
		fichier >> m_nbl;
		fichier >> m_nbc;

		// on initialise le plateau avec le nombre de ligne et de colonne
		m_plateau = new Plateau(m_nbl, m_nbc);

		// on lit le retour a la ligne apres le nombre de colonne
		fichier.get(c);

		// tant que nous ne somme pas a la fin du fichier
		while (fichier.get(c))
		{
			// on construit la position de notre j : elle va de 0 a nbc
			pos_j = j % m_nbc;

			// on lit le caractère dans le fichier, et en fonction de son type on crée une case dans le plateau

			// type mur
			if (c == '*') {
				m_plateau->setCase(i, pos_j, new Mur(i, pos_j, 2));
			}
			// type couloir
			if (c == ' ') {
				m_plateau->setCase(i, pos_j, new Couloir(i, pos_j, 3));
			}
			//type sortie
			if (c == 'S') {
				m_plateau->setCase(i, pos_j, new Sortie(i, pos_j, 1));
			}
			//type personnage
			if (c == 'P') {
				// on l'initialise comme un couloir
				m_plateau->setCase(i, pos_j, new Couloir(i, pos_j, 3));
				m_personnage = new Personnage(i, pos_j);
			}

			// on incrémente les i et j si le caractère lu n'est pas un retour à la ligne
			if (c != '\n') {
				j++;
				// des qu'on revient à j=0, on incrémente les lignes
				if (j % m_nbc == 0)
					i++;
			}

		}
		fichier.close();
	}
	// cas ou l'ouverture du fichier est impossible	
	else
		cerr << "Impossible d'ouvrir le fichier !" << endl;
}

// constructeur de recopie de labyrinthe
Labyrinthe::Labyrinthe(const Labyrinthe& l)
{
	m_nbc = l.m_nbc;
	m_nbl = l.m_nbl;
	m_plateau = new Plateau(*l.m_plateau);
	m_personnage = new Personnage(*l.m_personnage);
}

// destructeur de labyrinthe
Labyrinthe::~Labyrinthe() {

	delete m_personnage;
	delete m_plateau;
}

// on affiche le labyrinthe
void Labyrinthe::afficher(void)
{
	m_plateau->afficher(*m_personnage);
}

void Labyrinthe::deplacerPersoDroite(void)
{
	//On verifie que le deplacement est possible (c'est à dire que le deplacement amène vers un couloir ou vers la sortie)
	if (m_plateau->getCase(m_personnage->getI(), m_personnage->getJ() + 1)->getType() == 3 || m_plateau->getCase(m_personnage->getI(), m_personnage->getJ() + 1)->getType() == 1)
		m_personnage->deplacerDroite();
}

void Labyrinthe::deplacerPersoGauche(void)
{
	//On verifie que le deplacement est possible
	if (m_plateau->getCase(m_personnage->getI(), m_personnage->getJ() - 1)->getType() == 3 || m_plateau->getCase(m_personnage->getI(), m_personnage->getJ() - 1)->getType() == 1)
		m_personnage->deplacerGauche();
}

void Labyrinthe::deplacerPersoBas(void)
{
	//On verifie que le deplacement est possible
	if (m_plateau->getCase(m_personnage->getI() + 1, m_personnage->getJ())->getType() == 3 || m_plateau->getCase(m_personnage->getI() + 1, m_personnage->getJ())->getType() == 1)
		m_personnage->deplacerBas();
}

void Labyrinthe::deplacerPersoHaut(void)
{
	//On verifie que le deplacement est possible + cas de la premiere ligne, on ne peut pas sortir du plateau
	if (m_personnage->getI() != 0) {
		if (m_plateau->getCase(m_personnage->getI() - 1, m_personnage->getJ())->getType() == 3 || m_plateau->getCase(m_personnage->getI() - 1, m_personnage->getJ())->getType() == 1) {
			m_personnage->deplacerHaut();
		}
	}

}

bool Labyrinthe::fini(void)
{
	// on test si l'emplacement du personnage est sur la sortie
	if (m_plateau->getCase(m_personnage->getI(), m_personnage->getJ())->getType() == 1) {
		return true;
	}
	return false;

}
