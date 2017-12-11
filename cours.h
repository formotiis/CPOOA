#ifndef COURS_H
#define COURS_H
#include <string>

class Cours
{

public:
    Cours(std::string c,std::string desc, int nbHeures, int nbPlaces);
    ~Cours() = default;

private:
    std::string description;
    std::string dateDebutInscription;
    std::string dateFinInscriptions;
    int nombreHeures;
    int nombrePlaces;
    bool enAttente;
    std::string createur;
};

#endif // COURS_H
