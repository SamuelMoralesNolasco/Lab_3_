
#include <iostream>
#include <string>
#include "Person.h"
/**
* TO DO:
* Refer to Person.h. Person.h acts as an interface to the Person object.
* It displays the private variables associated with Person and the member
* functions that are used to 1) mutate or change the variables (i.e. mutator
* functions) and 2) access or return the variables (i.e. accessor functions).
* Without these functions we would not be able to change or even access the
* private variables.
*
* Only Person(), Person(...), updateName(), and getName() are completed.
* Follow the examples below to complete the remaining member functions of Person.
* Note that the name of the object + "::" comes before the name of the function.
*
* For example, void Person::updateName(...).
*
* Not the only some part of moveLocation() and isOlderThan() are included. This
was
* so the comments could be neatly placed to explain what they do.
*
* Make sure to include comments before the functions similar to Lab 2.
* (Recommended to use DoxyGen)
*
* Remaining functions to implement are:
* - updateAge()
* - updateOccupation()
* - movedLocation() // returns the opposite of is_from_IE
* - getAge()
* - getOccupation()
* - getLivesInIE()
* - isOlderThan()
*/
/**
* @brief Construct a new Person:: Person object
* default constructor sets the private variables to default values
*/
Person::Person(){
name = "";
age = -1;
occupation = "";
lives_in_IE = false;
}
/**
* @brief Constructs a new Person:: Person object with the following parameters
* passed as values.
*
* "this->" indicates that we are pointing to our class object
* (i.e. Person)'s private variables. This allows for two different variables to
* to be used with the same name. The distinction is that the "name" passed into
the function
* is an explicit parameter, while "this->name" is our private variable name.
*
* Note that if the explicit parameters did not have the same name as the private
var.
* then using "this->" is not necessary.
*
* @param name string: their name
* @param age int: years old
* @param occupation string: their job status
* @param lives_in_IE bool: returns if the Person lives in the Inland Empire or not
*/
Person::Person(string name, int age, string occupation, bool lives_in_IE){
this->name = name;
this->age = age;
this->occupation = occupation;
this->lives_in_IE = lives_in_IE;
}
/**
* @brief changes the name into new_name
*
* @param new_name
*/
void Person::updateName(string new_name)
{
name = new_name;
}
/**
* @brief changes if the person is from the IE to not from the IE
* and vice versa
* For example, if is_from_IE was true, it is updated to false.
* If is_from_IE was false, it is updated to true.
*/
void Person::movedLocation()
{
}
/**
* @brief returns the name of the Person object
*
* @return string
*/
string Person::getName() const{
return name;
}
/**
* @brief Compares the age of person b with the implicit Person class.
*
* @param b
* @return true if implicit Person is older than b
* @return false if implict Person is younger or equal to b
*/
bool Person::isOlderThan(Person b) const
{
return false; // you should modify this
}
