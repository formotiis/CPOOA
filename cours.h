#ifndef COURS_H
#define COURS_H
#include <string>

class Cours
{
public:
    /// @brief Le constructeur par défaut ne fait rien pour l'instant
    Cours();

    /// @brief Le constructeur de l'admin.
    ///
    /// @param nb_h Nombre d'heures du cours.
    ///
    /// @param nb_p Nombre de places du cours.
    ///
    /// @param desc Description du cours.
    Cours(int nb_h, int nb_p, std::string desc);

    /// @brief Le destructeur ne fait rien, mais doit être défini
    ///        comme abstrait.
    virtual ~Cours();

    /// @brief Fonction d'acceptation d'un cours de la part
    ///        d'un Admin. (Pas encore utilisée)
    /// @param d_deb Date de début des inscriptions.
    ///
    /// @param Date de fin des inscriptions.
    void accepter(std::string d_deb, std::string d_fin);
protected:
private:

    /// @brief Nombres d'heures du cours.
    ///
    int nb_heure;

    /// @brief Nombre de places du cours.
    ///
    int nb_places;

    /// @brief Description du cours.
    ///
    std::string description;

    /// @brief Date de debut des inscriptions.
    ///
    std::string debut_inscription;

    /// @brief Date de fin des inscriptions
    ///
    std::string date_fin_inscription;

    /// @brief Booleen à vrai si le cours est en attente de
    ///         validation de la part de l'admin.
    bool en_attente;


};

#endif // COURS_H
