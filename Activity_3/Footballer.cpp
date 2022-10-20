#include "Footballer.h"

// constructors (default)
Footballer::Footballer() :  Person(), _club{"Chelsea"} , _appearances{0}, _goals{0} {}
// constructor (user-specified)
Footballer::Footballer(std::string club,std::string forename, std::string surname, Date dob, int appearances, int goals)
    : Person{forename, surname, dob},_club{club},   _appearances{appearances}, _goals{goals} {}

int Footballer::get_appearances(){
    return _appearances;
}

int Footballer::get_goals(){
    return _goals;
}

std::string Footballer::get_club(){
    return _club;
}

