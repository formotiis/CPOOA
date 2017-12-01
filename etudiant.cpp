#include "etudiant.h"

/// @brief Constucteur de la classe Etudiant
///
/// @param i String contenant l'identifiant.
///
/// @param m String contenant le mot de passe.
///
Etudiant::Etudiant(std::string i, std::string m):Personne(i,m){
}


/// @brief Personne::getType Retourne le type Etudiant
///
/// @return Un string contenant Etudiant
///
std::string Personne::getType(){
    return "Etudiant";
}
