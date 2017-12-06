#ifndef ADMIN_H
#define ADMIN_H
#include "personne.h"

class Admin : public Personne
{
public:

    ~Admin() = default;

    ///
    /// \brief Constructeur de Admin
    /// \param identifiant
    /// \param password
    ///
    Admin(std::string identifiant,std::string password);

    ///
    /// \brief getType
    /// \return une chaine de caractère identifiant la classe
    ///
    std::string getType();
};

#endif // ADMIN_H
