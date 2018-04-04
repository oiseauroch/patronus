#include "controller.h"
#include <QDir>

/**
 * pointer for singleton class init to nullptr
 */
Controller* Controller::unique = nullptr;


/**
* @brief function to get unique controller
* 
* @return Controller&
*/
Controller& Controller::getInstance()
{
    if(unique == nullptr)
        unique = new Controller();

    return *unique;
}


/**
* @brief release the unique instance of controller class
* 
*/
void Controller::freeInstance()
{
    if(unique != 0)
    {
        delete unique;
    }

    unique = nullptr;
}


/**
* @brief private contructor 
* 
*/
Controller::Controller()
{
    conf = &config::GetInstance();
    this->questions = &(QuestionList::GetInstance(conf->Getproperty("questionUrl")));
    this->patronus = &(PatronusList::getInstance("patronusUrl"));
    
    sizePR  = this->patronus->getList(Patronus::Type::rare).size()-1;
    sizePC = this->patronus->getList(Patronus::Type::commun).size()-1;
    sizeQ = getQuestionList().getnbQuestions();
    
    
    //-------------- music player --------------------
    player = new QMediaPlayer;
    playlist = new QMediaPlaylist;
    utils::readFile<Controller>(conf->Getproperty("locMusic"), &Controller::addToplaylist, this);
    playlist->setCurrentIndex(1);
    player->setPlaylist(playlist);
    player->play();
    //--------------------------------------------------
}


QStringList Controller::getPatronusListName(Patronus::Type type)
{
    QStringList output;
    foreach (Patronus pat, this->patronus->getList(type)) {
        output << pat.getName().c_str();
    }
    return output;
    
}


/**
* @brief add spécific file to playlist
* 
* @param line location relative of the file
*/
void Controller::addToplaylist(std::string line)
{
    auto str = QDir::currentPath().append(line.c_str());
    this->playlist->addMedia(QUrl::fromLocalFile(str));
}

/**
* @brief destructeur of controller TODO
* 
*/
Controller::~Controller() {
    delete questions;
}


/**
* @brief return question relatively of its index
* 
* @param i question index
* @return Question
*/
Question Controller::getQuestion(int i)
{
    return questions->getQuestion(i);
}

/**
* @brief return the list of the questions
* 
* @return QuestionList&
*/
QuestionList & Controller::getQuestionList()
{
    return *(this->questions);
}

/**
* @brief add new index question to list of posed question
* 
* @param i index of the question
*/
void Controller::AddQposee(int i)
{
    qPosees.push_back(i);
}

/**
 * @brief return nb of remainder iteration 
* 
* @return int
*/
int Controller::GetNbIt()
{
    return nbIt;
}

/**
* @brief TODO
* 
*/
void Controller::empty()
{
}

/**
* @brief return size of common patronus list
* 
* @return int
*/
int Controller::GetSizePC()
{
    return sizePC;
}


/**
 * @brief return size of common patronus list
 * 
 * @return int
 */
int Controller::GetSizePR()
{
    return sizePR;
}

/**
* @brief return size of question list
* 
* @return int
*/
int Controller::GetSizeQ()
{
    return sizeQ;
}

/**
* @brief check if question was already posed
* 
* @param i index of question to check
* @return bool
*/
bool Controller::IsQPosee(int i)
{
    return (std::find(qPosees.begin(),qPosees.end(), i) != qPosees.end());
}

/**
* @brief check if patronus get is rare
* 
* @return bool
*/
bool Controller::IsRare()
{
    return this->isRare;
}

/**
* @brief reset the list of already posed questions
* TODO
*/
void Controller::ResetQposees()
{
    this->qPosees.empty();
}

/**
* @brief set nb of remainder iteration
* 
* @param i nbr of iterations
*/
void Controller::SetnbIt(int i)
{
    this->nbIt = i;
}

/**
* @brief set if patronus generated is rare
* 
* @param rare rare ?
*/
void Controller::SetRare(bool rare)
{
    this->isRare = rare;
}

/**
* @brief decrease by one the number of remaineder iterations
* 
* @return int new number ao remainder iterations
*/
int Controller::decreasenbIt()
{
    return --nbIt;
}

/**
* @brief invert the status of the music (mute or not)
* 
* @return bool crrent status of music
*/
bool Controller::invertMusic()
{
    player->setMuted(!player->isMuted());
    return player->isMuted();
}

Patronus * Controller::getPatronus(Patronus::Type type, int index)
{
    return this->patronus->getPatronus(index, type);
    
}


