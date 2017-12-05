#include "admin.h"

Admin::Admin(std::string identifiant, std::string password):Personne(identifiant,password)
{
}

std::string Admin::getType(){
    return "Admin";
}
