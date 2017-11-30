#include "etudiant.h"

Etudiant::Etudiant()
{
}

/// @brief Constucteur de la classe Etudiant
///
/// @param i String contenant l'identifiant.
///
/// @param m String contenant le mot de passe.
///
Etudiant::Etudiant(std::str i, std::str m){
    super(i,m);
}


/// @brief Personne::getType Retourne le type Etudiant
///
/// @return Un string contenant Etudiant
///
std::str Personne::getType(){
    return "Etudiant";
}
