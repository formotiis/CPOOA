#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

class Personne
{
public:
    /// @brief Fonction de connextion Sert à identifier l'utilisateur
    ///         i avec son mot de passe m associé.
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    void connexion(std::string i, std::string m);

    /// @brief Fonction de type d'utilisateur retourne le
    ///         type d'utilisateur à qui correspond cette personne.
    /// @return Une chaine de caracterères correspondant au
    ///         type de personne.
    virtual std::string getType() = 0;

    /// @brief Constructeur principal
    ///
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    Personne(std::string i = "login", std::string m = "psswd");

    /// @brief Le destructeur ne fait rien, mais doit être défini
    ///        comme abstrait.
    virtual ~Personne() =0;

private:

    /// @brief String contenant l'identifiant de la personne.
    std::string identifiant;

    /// @brief String contenant le mot de passe de la personne.
    std::string motDePasse;
};

#endif // PERSONNE_H
