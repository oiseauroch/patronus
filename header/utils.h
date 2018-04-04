#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <random>
#include <fstream>
#include <iostream>

/**
* @brief class to implements usefull static fonctions 
* 
*/
class utils {
public:
    static void parseline(std::string delimiter, std::string line, std::string tab[]);
    static void parseline(std::string line, std::string tab[]);
    static int getRandom(int max);
    
    /**
    * @brief read file line by line and perform function of each line
    * 
    * @param T class of the fontion to execute
    * @param url file location
    * @param func pointer of function to execute for each line
    * @param obj implementation of the class of the function to apply
    */
    template <class T>
    static void readFile(std::string url, void (T::*func)(std::string line),T *obj)
    {
        
        std::string readLine;
        std::ifstream myfile (url);
        if (myfile.is_open())
        {
            while ( getline(myfile,readLine) )
            {
                (obj->*func)(readLine);
            }
        }
        myfile.close();
        
    };
};



#endif // UTILS_H
