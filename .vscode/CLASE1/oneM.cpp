#include <iostream>
#include "One.h"

using namespace std;


One ::One() {
    int x  ;
    int y  ;
} 
    int One :: getX( ) {
        return M_x;

    }

    int One :: getY( ) {
        return m_y;

    } 

int main() {
    One obj;
    int x = 10;
    int y = 20;
    cout<< "X: " <<obj.getX ()<< endl;
    cout<< "Y: " <<obj.getX ()<< endl;

    return 0;

}


