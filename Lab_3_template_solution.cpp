#include <iostream>
#include <string>

class Person {
private:
    string name;
    int age;

    string occupation;
    bool livesInIE;

public:
    // Constructors
    Person() {
        name = "Unknown";
        age = 0;
        occupation = "Unemployed";
        livesInIE = false;
    }

    Person(string name, int age, string occupation, bool livesInIE) {
        this->name = name;
        this->age = age;
        this->occupation = occupation;
        this->livesInIE = livesInIE;
    }

    // Accessor functions
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getOccupation() const {
        return occupation;
    }

    bool getLivesInIE() const {
        return livesInIE;
    }

    // Mutator functions
    void updateName(const string &newName) {
        name = newName;
    }

    void updateAge(int newAge) {
        age = newAge;
    }

    void updateOccupation(const string &newOccupation) {
        occupation = newOccupation;
    }

    void movedLocation() {
        livesInIE = true;
    }

    // Other functions
    bool isOlderThan(const Person &otherPerson) const {
        return age > otherPerson.age;
    }
};

int main() {
    Person bob = Person("Bob", 100, "retired", true);
    cout << "Name: " << bob.getName() << sendl;
    cout << "Age: " << bob.getAge() << endl;
    cout << "Occupation: " << bob.getOccupation() << endl;
    cout << "Lives in IE: " << (bob.getLivesInIE() ? "Yes" : "No") << endl;

    Person unknown = Person();
    cout << "Name: " << unknown.getName() << endl;

    // Update Bob's name and age
    bob.updateName("Robert");
    bob.updateAge(101);
    cout << "Updated Name: " << bob.getName() << endl;
    cout << "Updated Age: " << bob.getAge() << endl;

    // Testing the movedLocation function
    bob.movedLocation();
    cout << "Bob now lives in IE: " << (bob.getLivesInIE() ? "Yes" : "No") << endl;

    // Comparing ages
    Person alice = Person("Alice", 30, "engineer", false);
    if (bob.isOlderThan(alice)) {
        cout << "Bob is older than Alice." << endl;
    } else {
        cout << "Bob is not older than Alice." << endl;
    }

    return 0;
}
