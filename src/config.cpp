#include "config.h"

#include <fstream>
#include <stdexcept>
#include "utils.h"
#include <iostream>


/**
* @brief pointer of the class instantiation
* 
*/
config *config::unique = nullptr;

/**
* @brief constructor for initialisation of the class must be used only one time
* send an std::runtime_error if instance already exist
* @param url config file url
* @return config&
*/
config& config::CreateInstance(std::string url)
{
    if(unique == nullptr) 
    {
        unique = new config(url);
        return *unique;
    }
    else 
    {
        std::cout << "instance already exist";
        throw std::runtime_error("instance already exist");
    }
    return *unique;
}

/**
* @brief return the current instance of the class
* If there is no instance, throw std::runtime_error
* @return config&
*/
config& config::GetInstance() {
    if(unique == nullptr) 
    {
        std::cout << "class not initialized";
        throw std::runtime_error("class not initialised");
    }
    else 
    {
        return *unique;
    }
    return *unique;
}
 
 /**
 * @brief release instance
 * 
 */
 void config::freeInstance()
{   if(unique != 0)
        {
            delete unique;
        }
        
        unique = nullptr;
}



/**
* @brief private constructor call refreshProperties to parse file 
* throw std::runtime_error if file does not exist
* @param url location on the file
*/
config::config(std::string url)
{
    if (SetPropertiesUrl(url) == -1) {
        throw std::runtime_error("Could not open file");
    } else {
     refreshProperties();   
    }
}

config::~config() {
    // %TODO
}

/**
* @brief return url of the file
* 
* @return std::__cxx11::string
*/
std::string config::GetPropertiesUrl()
{
    return this->propertiesUrl;
}

/**
* @brief parse the properties file and store all properties in a map
* 
*/
void config::refreshProperties()
{
    this->properties.clear();
    utils::readFile<config>(GetPropertiesUrl(),&config::addToMap,this);
}

/**
* @brief add properties and value associate
* 
* @param line kay value pair with this syntax : key=value
*/
void config::addToMap(std::string line) {
    std::string tab[2];
    utils::parseline("=", line, tab);
    this->properties.emplace(tab[0].c_str(),tab[1].c_str());
}

/**
* @brief set location of proerty file
* 
* @param url location of the file
* @return int i if ssuccess and -1 if file does not exist
*/
int config::SetPropertiesUrl(std::string url)
{
        std::ifstream myfile (url);
        if (myfile.is_open())
        {
            this->propertiesUrl = url;
            return 1;
        } else {
            return -1;
        }
}


/**
* @brief get value of specific property
* 
* @param name key of the property
* @return std::__cxx11::string value of the property
*/
std::string config::Getproperty(std::string name)
{
    return this->properties.at(name);
}

/**
* @brief set new value of existing property
* 
* @param name name of the property
* @param value value of the property
*/
void config::Setproperty(std::string name, std::string value)
{
    this->properties[name] = value;
}
