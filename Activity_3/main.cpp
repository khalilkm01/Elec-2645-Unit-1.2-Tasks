//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Footballer.h"

int main() {
  // create a 'default' Person object
  Person me;

  // default person is called 'John'
  std::cout << me.get_forename() << std::endl;
  // we can assign all the object properties using a initialiser list
  me = {"Kabeer", "Khalil", {16, Month::Apr, 2002}};
  // person is now called 'Peter'
  std::cout << me.get_forename() << std::endl;

  Footballer johnathan = {"Chelsea","John","Terry",{16, Month::Mar,1996},6,5};
  // can also create a specific person using the constructor
  Person bae("Meena", "Khalil", {12, Month::Aug, 2004});

  std::cout << bae.get_forename() << " was born on "
            << bae.get_dob() << std::endl;

  // Now create a student object
  Student student;
  // default student is called 'John' like the person
  std::cout << student.get_forename() << std::endl;
  // now we'll assign a profile to the student using a list
  student = {"Albert", "Einstein", {14, Month::Mar, 1879}, 201123456, 99.9};
  std::cout << student.get_forename() << " has an average of "
            << student.get_grade() << "\%. Wow! What a genius!\n";

  return 0;
}