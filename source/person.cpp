#include "person.h"

#include <iostream>
#include <string>

Person::Person(int age, std::string name) : mAge(age), mName(name) {}

void Person::display(){
    std::cout<<"Name----: "<<mName<<" ,Age: "<<mAge<<"\n";
}
