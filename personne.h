#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

class Personne
{
public:
    ///
    /// Constructeur de personne
    ///
    /// \brief Personne
    /// \param identifiant
    /// \param password
    ///
    Personne(std::string identifiant, std::string password);

    ///
    /// \brief getType
    /// \return retourne le type de la personne
    ///
    virtual std::string getType() = 0;

    virtual ~Personne() = default;

    std::string getMDP();
    std::string getPseudo();
    void deconnexion();

private:
    std::string pseudo;
    std::string motDePasse;
};

#endif // PERSONNE_H
