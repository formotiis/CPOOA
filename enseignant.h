#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personne.h"

class Enseignant : public Personne
{
public:
    ~Enseignant() = default;

    ///
    /// \brief Constructeur de Enseignant
    /// \param identifiant
    /// \param password
    ///
    Enseignant(std::string identifiant, std::string password);

    ///
    /// \brief getType
    /// \return une chaine de caractère identifiant la classe
    ///
    std::string getType();
};

#endif // ENSEIGNANT_H
