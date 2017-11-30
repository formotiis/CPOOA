#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
    /// @brief Le constructeur par défautne fait rien.
    Observer();

    /// @brief Le destructeur ne fait rien, mais doit être défini
    ///        comme abstrait;
    virtual ~Observer();
    /// @brief Fonction servant de mise à jour pour l'Observable
    ///        à définir avant utilisation !
    virtual void update() = 0;

};

#endif // OBSERVER_H
