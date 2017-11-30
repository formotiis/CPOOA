#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "personne.h"

class Etudiant : public Personne
{
public:

    /// @brief Constucteur de la classe Etudiant
    ///
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    Etudiant(std::str i, std::str m);
private:
    Etudiant();
    virtual ~Etudiant();
};

#endif // ETUDIANT_H
