#include "person.h"
#include <iostream>
#include <string>

Person::Person(int age, std::string firstName, std::string lastName) : mAge(age), mFirstName(firstName), mLastName(lastName) {}

void Person::display(){
    std::cout<<"-----First Name:+++++++ "<<mFirstName<<"Last Name:++++++++ "<<mLastName<<" ,Age: "<<mAge<<"\n";
    std::cout<<"Update display function\n\n\n";
    std::cout<<"Test git stash\n";
    std::cout<<"Test revert\n\n\n\n\n";
}

