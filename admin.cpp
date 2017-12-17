#include "admin.h"

Admin::Admin(std::string identifiant, std::string password):Personne(identifiant,password)
{
    std::ifstream fichier("./coursEnAttente.txt",std::ios::in);
    std::vector<std::string> attributs;
    std::string lecture;

    if(fichier){
        while(getline(fichier,lecture)){
            attributs = split(lecture,'#');
            listeCoursAttente.push_back(new Cours(attributs.at(0),attributs.at(1),attributs.at(2),attributs.at(3),attributs.at(4)));
        }
        fichier.close();
    }
}

std::vector<std::string> Admin::split(const std::string &text, char sep) {
  std::vector<std::string> temp;
  std::size_t start = 0, end = 0;
  while ((end = text.find(sep, start)) != std::string::npos) {
    temp.push_back(text.substr(start, end - start));
    start = end + 1;
  }
  temp.push_back(text.substr(start));
  return temp;
}

std::string Admin::getType(){
    return "Admin";
}
