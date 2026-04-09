#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    
    Person(std::string n, int a);

    
    ~Person();

    
    std::string getName() const;
    int getAge() const;

    
    void setName(std::string n);
    void setAge(int a);
};

#endif