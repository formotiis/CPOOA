#ifndef COURS_H
#define COURS_H

class Cours
{
public:
    Cours();

    Cours(int nb_h, int nb_p, std::str desc, std::str deb_insc, str::str date_fin);

   ~Cours();

protected:
private:
    int nb_heure;
    int nb_places;
    std::str description;
    std::str debut_inscription;
    std::str date_fin_inscription;
    bool en_attente;


};

#endif // COURS_H
