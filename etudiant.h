#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Personne.h"

class Etudiant : public Personne
{
public:
    ~Etudiant() = default;

    ///
    /// \brief Constructeur d'enseignant, se basant sur celui de Personne
    /// \param identifiant
    /// \param password
    ///
    Etudiant(std::string identifiant,std::string password);

    ///
    /// \brief getType
    /// \return uen chaine de caractère identifiant la classe
    ///
    std::string getType();
};

#endif // ETUDIANT_H
