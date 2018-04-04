
#ifndef PATRONUS_H
#define PATRONUS_H
#include <string>


class Patronus
{
public:
    enum class Type { rare, commun };
    Patronus(std::string name, std::string Desc, std::string Image, std::string type);
    Patronus();
    std::string getName();
    std::string getDesc();
    std::string getImageLoc();
    Patronus::Type getType();
    static Type isType(std::string type);
private:
    Patronus::Type type;
    std::string patronusName;
    std::string patronusDesc;
    std::string patronusImage;
    
};

#endif // PATRONUS_H
