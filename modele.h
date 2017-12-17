#ifndef MODELE_H
#define MODELE_H
#include <string>
#include <fstream>
#include "personne.h"
#include <vector>
#include "etudiant.h"
#include "admin.h"
#include "enseignant.h"
#include <iostream>
#include <QDir>
#include <QMessageBox>

class Modele
{
public:

    ~Modele() = default;

    ///
    /// \brief Constructeur du Modele
    ///
    Modele();

    ///
    /// \brief connexion : essaye de connecter l'utilisateur avec les identifiants saisies
    /// \param identifiant
    /// \param password
    ///
    bool connexion(std::string identifiant, std::string password);

    ///
    /// \brief deconnexion : deconnecte l'utilisateur courant
    ///
    void deconnexion();

    ///
    /// \brief split : permet de séparer une chaine de caractère dans un tableau dynamique
    /// \param vecteur
    /// \param chaine
    /// \param separateur
    ///
    int split(std::vector<std::string>& vecteur, std::string chaine, char separateur);

    ///
    /// \brief exist : test l'existance de l'utilisateur passé en paramètre
    /// \param identifiant
    /// \return
    ///
    bool exist(std::string identifiant);

    ///
    /// \brief inscription : inscrit un nouvel utilisateur
    /// \param identifiant
    /// \param password
    ///
    void inscription(std::string identifiant, std::string password);

    ///
    /// \brief getConnect : retourne la personne connectée
    /// \return
    ///
    Personne* getConnect();

    /**
     * @brief deconnection de l'utilisateur
     */
    void deconnecter();

    /**
     * crée un cour, l'écrit dans un fichier
     * @brief creaCours
     * @param titre
     * @param nb_heures
     * @param nb_places
     * @param desc
     */
    void creaCours(std::string titre, std::string nb_heures, std::string nb_places, std::string desc );
private:
    /// @brief personne connecté actuellement
    Personne* personneConnecte;
    std::vector<Personne*> listeUtilisateur;
};

#endif // MODELE_H
