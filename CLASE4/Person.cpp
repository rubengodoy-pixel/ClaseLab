#include "Person.h"
#include <iostream>

using namespace std;


Person::Person(std::string n, int a) : name(n), age(a) {
    std::cout << "[Sistema] Objeto Person creado para: " << name << std::endl;
}


Person::~Person() {
    std::cout << "[Sistema] Objeto Person (" << name << ") destruido." << std::endl;
}


std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}


void Person::setName(std::string n) {
    name = n;
}

void Person::setAge(int a) {
    age = a;

};

int main() {
    
    Person individuo("Ruben Godoy", 21);

    
    cout << "\n---- Datos Iniciales ----" << endl;
    cout << "Nombre: " << individuo.getName() << endl;
    cout << "Edad: " << individuo.getAge() << endl;

   
    individuo.setName("Ruben Godoy");
    individuo.setAge(22);

   
    cout << "\n--- Datos Actualizados ---" << endl;
    cout << "Nombre: " << individuo.getName() << endl;
    cout << "Edad: " << individuo.getAge() << endl;
    cout << "--------------------------\n" << endl;

    return 0; 
};