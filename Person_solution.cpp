#include "Person.h"

// Constructors
Person::Person() {
    name = "";
    age = -1;
    occupation = "";
    lives_in_IE = false;
}

Person::Person(string name, int age, string occupation, bool lives_in_IE) {
    this->name = name;
    this->age = age;
    this->occupation = occupation;
    this->lives_in_IE = lives_in_IE;
}

// Mutator Functions
void Person::updateName(string new_name) {
    name = new_name;
}

void Person::updateAge(int new_age) {
    age = new_age;
}

void Person::updateOccupation(string new_occupation) {
    occupation = new_occupation;
}

void Person::movedLocation() {
    lives_in_IE = !lives_in_IE; // Toggle the lives_in_IE value
}

// Accessor Functions
string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

string Person::getOccupation() const {
    return occupation;
}

bool Person::getLivesInIE() const {
    return lives_in_IE;
}

bool Person::isOlderThan(Person b) const {
    return age > b.age;
}
