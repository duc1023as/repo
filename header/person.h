#ifndef person_h
#define person_h

#include <string>
class Person{
private:
    int mAge;
    std::string mFirstName;
    std::string mLastName;
public:
    Person(int age, std::string firstName, std::string lastName);
    void display();
};

#endif