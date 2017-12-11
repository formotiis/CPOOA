#include "cours.h"

Cours::Cours(std::string c,std::string desc, int nbHeures, int nbPlaces)
{
    description = desc;
    nombreHeures = nbHeures;
    nombrePlaces = nbPlaces;
    dateDebutInscription ="";
    dateFinInscriptions ="";
    createur = c;
}
