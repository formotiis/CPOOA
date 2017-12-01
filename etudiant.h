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
    Etudiant(std::string i, std::string m);

    ///destructeur
    ~Etudiant() = default;

    std::string getType();

    /// @brief Fonction de connextion Sert à identifier l'utilisateur
    ///         i avec son mot de passe m associé.
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    void connexion(std::string i, std::string m);
};

#endif // ETUDIANT_H
