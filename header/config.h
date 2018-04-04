#ifndef CONFIG_H
#define CONFIG_H


#include<map>

/**
* @brief parse a config file with pair of key value to be used by the software. File must follow this syntaxe : 
* key1=value1
* key2=value2
* ...
* 
* implement singleton pattern
*/
class config
{
public:
    static config& CreateInstance(std::string url);
    static config& GetInstance();
    static void freeInstance();
    
    std::string Getproperty(std::string name);
    void Setproperty(std::string name, std::string value);
    void refreshProperties();
    int SetPropertiesUrl(std::string url);
    std::string GetPropertiesUrl();
    ~config();
private:
    static config * unique;
    config(std::string url);
    std::map<std::string, std::string> properties;
    std::string propertiesUrl;
    void addToMap(std::string line);
};

#endif // CONFIG_H
