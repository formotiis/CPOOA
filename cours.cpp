#include "cours.h"

Cours::Cours(std::string t,std::string nbHeures, std::string nbPlaces, std::string desc, std::string createur)
{
    titre = t;
    description = desc;
    nombreHeures = nbHeures;
    nombrePlaces = nbPlaces;
    dateDebutInscription ="";
    dateFinInscriptions ="";
    createur = createur;
}

std::string Cours::getTitre(){
    return titre;
}
