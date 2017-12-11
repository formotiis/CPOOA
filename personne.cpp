#include "personne.h"

Personne::Personne(std::string identifiant,std::string password)
{
    pseudo = identifiant;
    motDePasse = password;
}

std::string Personne::getMDP(){
    return motDePasse;
}

std::string Personne::getPseudo(){
    return pseudo;
}

void Personne::deconnexion(){
    pseudo.clear();
    motDePasse.clear();
}
