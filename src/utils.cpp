#include "utils.h"
#include "config.h"


/**
* @brief parse line like csv file and store each colonn in a table
* TODO
* @param delimiter colonn delimiter
* @param line line to parse
* @param tab table where we store the result
*/
void utils::parseline(std::string delimiter, std::string line, std::string tab[])
{
            int i = 0;
            size_t pos = 0;
            std::string token;
            while ((pos = line.find(delimiter)) != std::string::npos) {
                token = line.substr(0, pos);
                tab[i++] = token ;
                line.erase(0, pos + delimiter.length());
            }
            tab[i] = line;
}

void utils::parseline(std::string line, std::string tab[])
{
    auto conf =  config::GetInstance();
    std::string delimiter = conf.Getproperty("delimiter");
    int i = 0;
    size_t pos = 0;
    std::string token;
    while ((pos = line.find(delimiter)) != std::string::npos) {
        token = line.substr(0, pos);
        tab[i++] = token ;
        line.erase(0, pos + delimiter.length());
    }
    tab[i] = line;
}


/**
* @brief generated an random int between 0 and max
* 
* @param max max random value
* @return int
*/
int utils::getRandom(int max) {
    std::random_device rd;     // only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
    std::uniform_int_distribution<int> uni(0,max); // guaranteed unbiased
    
    return uni(rng);
    
}


