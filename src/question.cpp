#include "question.h"



    Question::Question(std::string q, std::string c1, std::string c2, std::string c3) {
    this->question = q;
    this->choices[0] = c1;
    this->choices[1] = c2;
    this->choices[2] = c3;
}

std::string Question::getQuestion() {
    return this->question;
}

std::string Question::getChoice1() {
    return this->choices[0];
}


std::string Question::getChoice2() {
    return this->choices[1];
}

std::string Question::getChoice3() {
    return this->choices[2];
}
