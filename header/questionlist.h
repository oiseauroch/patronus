#ifndef QUESTIONLIST_H
#define QUESTIONLIST_H
#include <iostream>
#include <fstream>
#include <string>
#include "question.h"
#include <vector>
#include "utils.h"


/**
* @brief store and manage the set of questions
* 
*/
class QuestionList
    {
    public:
        static QuestionList& GetInstance();
        static QuestionList& GetInstance(std::string url);
        static void FreeInstance();
        Question getQuestion(int elt);
        void empty();
        ~QuestionList();
        int getnbQuestions();

    private:
        QuestionList(std::string url);
        static QuestionList* unique; //!< instance unique
        std::vector<Question> list;
        void addToList ( std::__cxx11::string line );
    };


#endif // QUESTIONLIST_H
