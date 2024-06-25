#ifndef person_h
#define person_h

#include <string>
class Person{
private:
    int mAge;
    std::string mName;
public:
    Person(int age, std::string name);
    void display();
};

#endif