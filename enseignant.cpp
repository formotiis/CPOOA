#include "enseignant.h"

Enseignant::Enseignant(std::string identifiant, std::string password):Personne(identifiant,password)
{
}

std::string Enseignant::getType(){
    return "Enseignant";
}
