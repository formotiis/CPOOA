#ifndef ADMIN_H
#define ADMIN_H
#include "personne.h"

class Admin: public Personne
{
public:

    /// @brief Constucteur de la classe Admin
    ///
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    Admin(std::string i, std::string m);

    ///destructeur
    ~Admin() = default;

    std::string getType();

    /// @brief Fonction de connextion Sert à identifier l'utilisateur
    ///         i avec son mot de passe m associé.
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    void connexion(std::string i, std::string m);
};
#endif
