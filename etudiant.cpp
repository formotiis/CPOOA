#include "etudiant.h"

Etudiant::Etudiant(std::string identifiant, std::string password):Personne(identifiant,password)
{
}

std::string Etudiant::getType(){
    return "Etudiant";
}
