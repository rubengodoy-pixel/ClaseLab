#ifndef TWO_H
#define TWO_H

class Two {
private:
    int M_x;
    char M_a;

public:

    Two(int valX = 0, char valA = "  ");

    
    int getX() const;
    char getA() const;


    void setX(int valX);
    void setA(char valA);
};

#endif