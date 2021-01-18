// Tpnote2.cpp : CAMILLE EUVRARD


#include "Mur.h"
#include "Couloir.h"
#include "Sortie.h"
#include "Personnage.h"
#include "Plateau.h"
#include "Labyrinthe.h"

int main()
{

    char choix;
    //int niveau;
    //string Nomfichier;

    /*
    // l'utilisateur choisit le niveau
    do {
        cout << "Niveau 1, 2, 3 ?" << endl;
        cin >> niveau;
    } while (niveau != 1 && niveau != 2 && niveau != 3);

    // on appelle le bon fichier labyrinthe en fonction du niveau
    Nomfichier = "labyrinthe_level" + to_string(niveau) + ".txt";

    Labyrinthe L(Nomfichier);*/

    Labyrinthe L(11, 12);

    do {
        L.afficher();
        do {
            cout << endl << "Quel deplacement ? Bas(B) , Haut(H), Droite(D), Gauche(G) :" << endl;
            cin >> choix ;
        } while ((choix != 'B') && (choix != 'H') && (choix != 'D') && (choix != 'G'));

        switch (choix) {
        case 'B': L.deplacerPersoBas();
                  break;
        case 'H': L.deplacerPersoHaut();
                  break;
        case 'G': L.deplacerPersoGauche();
                  break;
        case 'D': L.deplacerPersoDroite();
                  break;
        }
    } while (!L.fini());

    cout << "Gagne !" << endl;

}
