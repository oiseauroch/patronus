
#include "patronus.h"

#include <iostream>


    Patronus::Patronus(std::string name, std::string desc, std::string image, std::string type) {
        
        this->patronusDesc = desc;
        this->patronusImage = image;
        this->patronusName = name;
        this->type = type.compare("rare")? Type::rare : Type::commun;
    }
    
    Patronus::Patronus()
{ //do nothing
}

    
    std::string Patronus::getName() {
        return this->patronusName;
    }
    
    std::string Patronus::getDesc() {
        return this->patronusDesc;
    }

    std::string Patronus::getImageLoc() {
        return this->patronusImage;
    }
    
    Patronus::Type Patronus::getType() {
        return this->type;
    }

  Patronus::Type Patronus::isType(std::string type)
{
    if(type.compare("commun") == 0) 
    {
        return Patronus::Type::commun;
    } else if (type.compare("rare") == 0) 
    {
        return Patronus::Type::rare;
    } 
    std::cout << "type not recognized" << std::endl;
    throw std::range_error("string type don't match any enum element");

}
