#include "PatronusList.h"
#include "utils.h"

#include <fstream>
#include <iostream>

/**
 * pointer for singleton class init to nullptr
 */
PatronusList* PatronusList::unique = nullptr;


/**
 * @brief function to get unique controller
 * 
 * @return patronusList instance
 */
PatronusList & PatronusList::getInstance(std::string list)
{
if(unique == nullptr)
    
        unique = new PatronusList(list);
    
    return *unique;
}



PatronusList::PatronusList(std::string list)
{
    conf = &config::GetInstance();
    utils::readFile(conf->Getproperty(list), &PatronusList::addToList, this);
}

PatronusList::~PatronusList() {
    // %TODO
}

/**
* @brief get patronus list with type "type"
* 
* @param type type of the patronus
* @return std::vector< Patronus >
*/
std::vector<Patronus> PatronusList::getList(Patronus::Type type) {
    if (type == Patronus::Type::commun) 
    {
        return this->ListCommun;
    } else 
    {
        return this->listRare;
    }
}

/**
* @brief get patronus with index "i" in list type "type"
* 
* @param i index of patronus
* @param type type of patronus
* @return Patronus
*/
Patronus* PatronusList::getPatronus(int i, Patronus::Type type)
{
    if (type == Patronus::Type::commun) 
    {
        return &(this->ListCommun.at(i));
    } else 
    {
        return &(this->listRare.at(i));
        
    }
}

/**
* @brief get line with patronus description and add batronus du the good list
* patronus_name<delimiter>patronus_description<delimiter>image_location<delimiter>patronus_type
* 
* @param line line with patronus informations
*/
void PatronusList::addToList(std::string line)
{
    std::string dataPatronus[4];
    utils::parseline(conf->Getproperty("delimiter"), line, dataPatronus);
    if( Patronus::Type::commun == Patronus::isType(dataPatronus[3])) 
    {
        this->ListCommun.push_back(Patronus(dataPatronus[0], dataPatronus[1], dataPatronus[2], dataPatronus[3] ));
      //  std::cout << "patronus commun : " << dataPatronus[0] << " type : " << dataPatronus[3] << std::endl;
    } else
    {
        this->listRare.push_back(Patronus(dataPatronus[0], dataPatronus[1], dataPatronus[2], dataPatronus[3] ));
      //  std::cout << "patronus rare : " << dataPatronus[0] << " type : " << dataPatronus[3]<< std::endl;
    }
}

