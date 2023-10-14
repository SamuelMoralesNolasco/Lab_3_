/***
* CSE 2010 Fall 2023
* Lab #{n}
* {Samuel Morales} #{Coyote ID: 008346748}
* {Date 10/13/2023}
*
* {In this lab, we were tasked with creating our own class object in C++. The objective was to develop a class interface within a header file, implement member functions within a .cpp file, and test our class within a main program. The focus was on understanding the concept of private variables, utilizing mutator functions to modify them, and accessing these variables through accessor functions. We also learned how to link our code files together for a cohesive program.}
*
* The most challenging aspect of this lab was comprehending how to design a class object with proper encapsulation and organizing the code across multiple files. It required a solid understanding of object-oriented programming (OOP) principles, which I found to be difificult.

To tackle this challenge, I followed the detailed instructions provided in the lab manual. I carefully designed the class interface in the header file, implemented the member functions in the .cpp file, and tested the class in the main program. I paid special attention to scoping rules and the use of mutator and accessor functions to work with private variables. By adhering to these instructions and ensuring the correct encapsulation, I was able to successfully create and test the class object as per the lab requirements.





*
***/
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
/**
* The structure of the files are as follows:
* Lab_3_template.cpp -> calls the class and is considered the "main" program
* Person.cpp -> implements and contains the functionalities of the class
* Person.h -> contains the interface, declarations of the class, and includes
* the private variables and member functions
*/
/**
* Following the examples below, create your own class objects that calls ALL
* the functions.
*
* Initialize your objects of type Person.
* Use the mutator functions to modify the private variables of your Person.
* Display the variables associated with your Person using the accessor functions
* and cout or print.
*/

#include <iostream>
#include "Person.h"

int main() {
    Person bob = Person("Bob", 100, "retired", true);
    cout << "Name: " << bob.getName() << endl;
    cout << "Age: " << bob.getAge() << endl;
    cout << "Occupation: " << bob.getOccupation() << endl;
    cout << "Lives in IE: " << (bob.getLivesInIE() ? "Yes" : "No") << endl;

    Person unknown = Person();
    cout << "Name: " << unknown.getName() << endl;

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

