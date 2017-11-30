#include "personne.h"

/// @brief Constructeur par défaut ne fait rien.
///
Personne::Personne()
{
}
/// @brief Le destructeur ne fait rien, mais doit être défini
///        comme abstrait;
virtual Personne::~Personne() {
}

/// @brief Constructeur principal
///
/// @param i String contenant l'identifiant.
///
/// @param m String contenant le mot de passe.
///
Personne::Personne(std::str i, std::str m){
    this->identifiant = i;
    this->motDePasse = m;
}

/// @brief Fonction de connextion Sert à identifier l'utilisateur
///         i avec son mot de passe m associé.
/// @param i String contenant l'identifiant.
///
/// @param m String contenant le mot de passe.
///
void Personne::connexion(std::str i, std::str m){

}

/// @brief Fonction de type d'utilisateur retourne le
///         type d'utilisateur à qui correspond cette personne.
/// @return Une chaine de caracterères correspondant au
///         type de personne.
std::str Personne::getType(){

    return "Not yet";
}
