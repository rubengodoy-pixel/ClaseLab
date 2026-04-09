#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(int valX, int valY) : x(valX), y(valY) {}

int Point::getX() const { return x; }
int Point::getY() const { return y; }

void Point::display() const {
    cout << "(" << x << ", " << y << ")";
}


int Point::IzquierdaDe(const Point& other) const {
    return (x < other.x) ? 1 : 0;
}

int Point::DerechaDe(const Point& other) const {
    return (x > other.x) ? 1 : 0;
}

int Point::ArribaDe(const Point& other) const {
    return (y > other.y) ? 1 : 0;
}

int Point::AbajoDe(const Point& other) const {
    return (y < other.y) ? 1 : 0;
}

double Point::distancia(const Point& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
};

int main() {
    Point puntoA(5, 5);
    int userX, userY;

    cout << "Punto de referencia A: ";
    puntoA.display();
    cout << "\n\nIngrese coordenadas de punto B:" << endl;
    cout << "X: "; cin >> userX;
    cout << "Y: "; cin >> userY;

    Point puntoB(userX, userY);

    cout << "\nPosicion de B respecto a A:" << endl;
    
    
    if (puntoB.IzquierdaDe(puntoA))  cout << "- B esta a la izquierda de A." << endl;
    if (puntoB.DerechaDe(puntoA)) cout << "- B esta a la derecha de A." << endl;
    if (puntoB.ArribaDe(puntoA))  cout << "- B esta arriba de A." << endl;
    if (puntoB.AbajoDe(puntoA))  cout << "- B esta abajo de A." << endl;
    
    if (userX == puntoA.getX() && userY == puntoA.getY()) {
        cout << "- B esta en la misma posicion que A." << endl;
    }

    double dist = puntoB.distancia(puntoA);
    cout << "\n La distancia entre A y B es: " << dist << endl;

    return 0;
};