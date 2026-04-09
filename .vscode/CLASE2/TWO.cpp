
#include <iostream>
#include "TWO.h"

Two::Two(int valX, char valA) : M_x (valX), M_a(valA) {}


int Two::getX() const {
    return M_x;
}

char Two::getA() const {
    return M_a;
}


void Two::setX(int valX) {
    M_x = valX;
}

void Two::setA(char valA) {
    M_a = valA;
}

using namespace std;

int main() {
    
    Two objeto(10, "Z");

    
    cout << "--- Valores Iniciales ---" << endl;
    cout << "Valor de x: " << objeto.getX() << endl;
    cout << "Valor de a: " << objeto.getA() << endl;

    
    objeto.setX(42);
    objeto.setA("G");

    
    cout << "\n--- Valores Actualizados ---" << endl;
    cout << "Nuevo valor de x: " << objeto.getX() << endl;
    cout << "Nuevo valor de a: " << objeto.getA() << endl;

    return 0;
};