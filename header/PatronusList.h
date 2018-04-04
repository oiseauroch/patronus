#ifndef PATRONUSLIST_H
#define PATRONUSLIST_H

#include <vector>
#include <string>

#include "patronus.h"
#include "config.h"
class PatronusList
{
public:
    static PatronusList& getInstance(std::string list);
    static void releaseInstance();
    std::vector<Patronus> getList(Patronus::Type type);
    Patronus* getPatronus(int i, Patronus::Type type);
private:
    static PatronusList* unique;
    ~PatronusList();
    PatronusList(std::string listFile);
    std::vector<Patronus> listRare;
    std::vector<Patronus> ListCommun;
    void addToList(std::string line);
    config* conf;
};

#endif // PATRONUSLIST_H
