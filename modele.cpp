#include "modele.h"

Modele::Modele()
{
    personneConnecte = NULL;
    std::ifstream fichier("./membres.txt",std::ios::in);

    std::string lecture;
    std::vector<std::string> varSplit;
    int taille = 0;
    Personne* util;

    if(fichier){
        while(getline(fichier,lecture)){

            taille = split(varSplit,lecture,' ');
            if(taille >= 3){
                if(varSplit.at(2).compare("Etudiant") == 0)
                        util = new Etudiant(varSplit.at(0),varSplit.at(1));
                if(varSplit.at(2).compare("Admin") == 0)
                        util = new Admin(varSplit.at(0),varSplit.at(1));
                if(varSplit.at(2).compare("Enseignant") ==0)
                        util = new Enseignant(varSplit.at(0),varSplit.at(1));
                listeUtilisateur.push_back(util);
            }
        }
        fichier.close();
    }
}

void Modele::deconnexion(){
    personneConnecte = NULL;
}

bool Modele::connexion(std::string identifiant, std::string password){
    bool res = false;
    for(int i =0;i<listeUtilisateur.size();i++){
        if(identifiant.compare(listeUtilisateur.at(i)->getPseudo())==0 && password.compare(listeUtilisateur.at(i)->getMDP())==0){
            personneConnecte = listeUtilisateur.at(i);
            res = true;
        }
    }

    return res;
}


int Modele::split(std::vector<std::string>& vecteur, std::string chaine, char separateur)
{
    vecteur.clear();

    std::string::size_type stTemp = chaine.find(separateur);

    while(stTemp != std::string::npos)
    {
        vecteur.push_back(chaine.substr(0, stTemp));
        chaine = chaine.substr(stTemp + 1);
        stTemp = chaine.find(separateur);
    }

    vecteur.push_back(chaine);

    return vecteur.size();
}

bool Modele::exist(std::string identifiant){
    bool res = false;
    for(int i = 0; i < listeUtilisateur.size();i++)
        if(listeUtilisateur.at(i)->getPseudo().compare(identifiant) == 0)
            res = true;
    return res;
}

void Modele::inscription(std::string identifiant, std::string password){
    if(!Modele::exist(identifiant)){
        std::ofstream fichier("./membres.txt",std::ios::app);
        listeUtilisateur.push_back(new Etudiant(identifiant, password));
        fichier << ("\n"+identifiant + " " + password + " Etudiant");
        fichier.close();
        QMessageBox qmb;
        qmb.setText("Inscription réussie");
        qmb.exec();
    }
    else {
        QMessageBox qmb;
        qmb.setText("Echec : Pseudo déjà existant");
        qmb.exec();
    }
}

void Modele::creaCours(std::string titre, std::string nb_heures, std::string nb_places, std::string desc ){
    std::ofstream fichier("./coursEnAttente.txt",std::ios::app);
    fichier << (titre+"#"+nb_heures + "#" + nb_places + "#" +desc +"#"+getConnect()->getPseudo()+"\n");
    fichier.close();
    QMessageBox qmb;
    qmb.setText("Creation du cours réussie");
    qmb.exec();
    for(int i =0; i<listeUtilisateur.size();i++){
        if(listeUtilisateur.at(i)->getType() == "Admin")
            dynamic_cast<Admin*>(listeUtilisateur.at(i))->ajoutCoursAttente(new Cours(titre,nb_heures,nb_places,desc,listeUtilisateur.at(i)->getPseudo()));
    }
}

Personne* Modele::getConnect(){
    return personneConnecte;
}

void Modele::deconnecter(){
    personneConnecte = NULL;
}
