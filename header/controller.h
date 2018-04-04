#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "questionlist.h"
#include "PatronusList.h"
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaPlaylist>

#include "config.h"

/**
 * @Brief class that perform actions on the interface. It's the center of decisions of the software
 * 
 * @descrition this class implement a singleton pattern
 */
class Controller
{
public:
    static Controller& getInstance();
    static void freeInstance();
    void empty();
    Question getQuestion(int i);
    QuestionList& getQuestionList();
    QStringList getPatronusListName(Patronus::Type type);
    Patronus* getPatronus(Patronus::Type type, int index);
    int GetSizeQ();
    int GetSizePR();
    int GetSizePC();
    int GetNbIt();
    void SetnbIt(int i);
    bool IsRare();
    void SetRare(bool rare);
    bool IsQPosee(int i);
    void AddQposee(int i);
    void ResetQposees();
    int decreasenbIt();
    bool invertMusic();
    
private:
    ~Controller();
    Controller();
    void addToplaylist( std::string line ) ;
    
    static Controller* unique; //!< unique instance 
    QuestionList* questions;
    PatronusList* patronus;
    
    int sizeQ; 
    int sizePR;
    int sizePC;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    int nbIt;
    bool isRare;
    std::vector<int> qPosees;
    config* conf;
    
};

#endif // CONTROLLER_H


