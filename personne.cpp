#include "personne.h"

/// @brief Constructeur principal
///
/// @param i String contenant l'identifiant.
///
/// @param m String contenant le mot de passe.
///
Personne::Personne(std::string i, std::string m){
    this->identifiant = i;
    this->motDePasse = m;
}

/// @brief Fonction de connextion Sert à identifier l'utilisateur
///         i avec son mot de passe m associé.
/// @param i String contenant l'identifiant.
///
/// @param m String contenant le mot de passe.
///
void Personne::connexion(std::string i, std::string m){

}

Personne::~Personne(){}
