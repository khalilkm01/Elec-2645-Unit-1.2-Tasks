#ifndef FOOTBALLER_H
#define FOOTBALLER_H

#include "Person.h"
#include <string.h>

class Footballer : public Person {
    public:
    // Constructor
        Footballer();
        Footballer(std::string club,std::string forename, std::string surname, Date dob, int appearances, int goals);
        //Accessor methods
        std::string get_club();
        int get_appearances();
        int get_goals();
    private:
        std::string _club;
        int _appearances;
        int _goals;

};  

#endif