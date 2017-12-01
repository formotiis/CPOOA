#include "cours.h"

/// @brief Le constructeur par défaut ne fait rien pour l'instant
Cours::Cours() {
}

/// @brief Le destructeur ne fait rien, mais doit être défini
///        comme abstrait.
Cours::~Cours(){
}
/// @brief Le constructeur de l'admin.
///
/// @param nb_h Nombre d'heures du cours.
///
/// @param nb_p Nombre de places du cours.
///
/// @param desc Description du cours.
Cours::Cours(int nb_h, int nb_p, std::string desc){
    this->nb_heure = nb_h;
    this->nb_places = nb_p;
    this->description = desc;
}
