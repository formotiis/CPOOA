#ifndef PERSONNE_H
#define PERSONNE_H

class Personne
{
public:
    /// @brief Fonction de connextion Sert à identifier l'utilisateur
    ///         i avec son mot de passe m associé.
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    void connexion(std::str i, std::str m);

    /// @brief Fonction de type d'utilisateur retourne le
    ///         type d'utilisateur à qui correspond cette personne.
    /// @return Une chaine de caracterères correspondant au
    ///         type de personne.
    std::str getType();
protected:
    /// @brief Constructeur par défaut ne fait rien.
    ///
    Personne();

    /// @brief Constructeur principal
    ///
    /// @param i String contenant l'identifiant.
    ///
    /// @param m String contenant le mot de passe.
    ///
    Personne(std::str i, std::str m);
private:
    /// @brief Le destructeur ne fait rien, mais doit être défini
    ///        comme abstrait.
    virtual ~Personne();

    /// @brief String contenant l'identifiant de la personne.
    std::str identifiant;

    /// @brief String contenant le mot de passe de la personne.
    std::str motDePasse;
};

#endif // PERSONNE_H
