#ifndef COURS_H
#define COURS_H
#include <string>

class Cours
{

public:
    Cours(std::string t,std::string nbHeures, std::string nbPlaces, std::string desc, std::string createur);
    ~Cours() = default;
    std::string getTitre();

private:
    std::string description;
    std::string dateDebutInscription;
    std::string dateFinInscriptions;
    std::string titre;
    std::string nombreHeures;
    std::string nombrePlaces;
    bool enAttente;
    std::string createur;
};

#endif // COURS_H
