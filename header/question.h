#ifndef QUESTION_H
#define QUESTION_H
#include <string>


/**
 * @brief The Question class
 * store the question and each choice
 */
    class Question
    {
    public:
        Question(std::string q, std::string c1, std::string c2, std::string c3);
        std::string getQuestion();
        std::string getChoice1();
        std::string getChoice2();
        std::string getChoice3();


    private:
        std::string question;
        std::string choices[3];

    };

#endif // QUESTION_H
