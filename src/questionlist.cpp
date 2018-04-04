#include "questionlist.h"


QuestionList* QuestionList::unique = nullptr;

/**
* @brief destructor
* 
*/
QuestionList::~QuestionList() {
        while (!list.empty())
        {
            list.pop_back();
            list.~vector();
        }
}

/**
* @brief get current instance
* 
* @return QuestionList&
*/
QuestionList& QuestionList::GetInstance()
{
    if(unique == nullptr)
        throw std::runtime_error("instance does not exist");

    return *unique;
}

QuestionList& QuestionList::GetInstance(std::string url)
{
    if(unique == nullptr)
        unique = new QuestionList(url);
    
    return *unique;
}

/**
* @brief release instance
* 
*/
void QuestionList::FreeInstance()
{
    if(unique != 0)
    {
        delete unique;
    }

    unique = nullptr;
}

/**
* @brief private constructeur parse TODO
* 
*/
QuestionList::QuestionList(std::string url) {
    utils::readFile(url, &QuestionList::addToList, this);
    
}

Question QuestionList::getQuestion(int elt) {
    return list.at(elt);
}



int QuestionList::getnbQuestions()
{
    return (list.size()-1);
}

void QuestionList::addToList(std::string line)
{   
    std::string choices[3];
    utils::parseline(line, choices);
    list.push_back(Question("",choices[0], choices[1], choices[2]));
}
