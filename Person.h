#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    // Constructors
    Person();
    Person(string name, int age, string occupation, bool lives_in_IE);

    // Mutator Functions
    void updateName(string new_name);
    void updateAge(int new_age);
    void updateOccupation(string new_occupation);
    void movedLocation();

    // Accessor Functions
    string getName() const;
    int getAge() const;
    string getOccupation() const;
    bool getLivesInIE() const;
    bool isOlderThan(Person b) const;

private:
    string name;
    int age;
    string occupation;
    bool lives_in_IE;
};

#endif
