#ifndef ADMIN_H
#define ADMIN_H
#include "personne.h"
#include <fstream>
#include <iostream>

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

    /**
     * @brief ajoutCoursAttente : ajout un cour en attente dans la liste des cours en attente
     * @param c
     */
    void ajoutCoursAttente(Cours* c);

    std::vector<Cours*> getListeCoursAttente();
private:
    /**
     * @brief listeCours : lsite des cours non validé
     */
    std::vector<Cours*> listeCoursAttente;

    /**
     * @brief split: decoupe une chaine de caractère
     * @param text
     * @param sep
     * @return
     */
    std::vector<std::string> split(const std::string &text, char sep);
};

#endif // ADMIN_H
