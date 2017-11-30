#include "cours.h"

Cours::Cours() {
}

Cours::~Cours(){
}

Cours::Cours(int nb_h, int nb_p, std::str desc){
    this->nb_heure = nb_h;
    this->nb_places = nb_p;
    this->description = desc;
}
