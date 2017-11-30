#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include "observer.h"
#include "qlist.h"
class Observable
{
    protected:
        /// @brief Le constructeur par défaut initialise le conteneur.
        Observable();

    public:
        /// @brief Le destructeur ne fait rien, mais doit être défini
        ///        comme abstrait.
        virtual ~Observable();

        /// @brief  Cette méthode sert à ajouter des Observer à l'Observable.
        ///
        /// @param  o  Observer à ajouter à la liste.
        ///
        void addObserver(Observer o);

        /// @brief  Cette méthode sert à signaler à l'observable qu'il à été changé.
        ///
        void setChanged();

        /// @brief  Cette méthode sert à signaler aux Observers qu'ils
        ///         doivent se mettre à jour.
        void notifyObserver();

    private:
        /// @brief Le booleen à vrai si l'Observable à été changé
        ///        et les Observers n'ont pas été prévenues.
        bool changed;

        /// @brief QList contenant les Observer
        ///
        QList<Observer> container;
};

#endif // OBSERVABLE_H
