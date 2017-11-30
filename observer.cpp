#include "observer.h"

/// @brief Le constructeur par défautne fait rien.
Observer::Observer() {
}

/// @brief Le destructeur ne fait rien, mais doit être défini
///        comme abstrait;
virtual Observer::~Observer() {
}

/// @brief Fonction servant de mise à jour pour l'Observable
///        à définir avant utilisation !
virtual void Observer::update() = 0;
