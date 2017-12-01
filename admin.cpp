#include "admin.h"

Admin::Admin(std::string i, std::string m):Personne(i,m){
}

std::string getType(){
    return "Admin";
}
