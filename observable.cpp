#include "observable.h"

/// @brief Le constructeur par défaut initialise le conteneur.
Observable::Observable() {
    this->container = QList<Observer>();
}

/// @brief Le destructeur ne fait rien, mais doit être défini
///        comme abstrait.
Observable::~Observable(){

}

/// @brief  Cette méthode sert à ajouter des Observer à l'Observable.
///
/// @param  o  Observer à ajouter à la liste.
///
void Observable::addObserver(Observer o){
    this->container.append(o); // Observer ajouté au Conteneur
}

/// @brief  Cette méthode sert à signaler à l'observable qu'il à été changé.
///
void Observable::setChanged(){
    this->changed = true; // L'observable à été changé
}

/// @brief  Cette méthode sert à signaler aux Observers qu'ils
///         doivent se mettre à jour.
void Observable::notifyObserver(){
    if (this->changed== true) { // Si l'Observer à été changé
        int i;
        for (i=0; i< this->container.length();i++){
            this->container.takeAt(i).update(); // Mise à jour des Observers
        }
    this->changed = false; // Remis à false car les Observers ont été update
    }
}
