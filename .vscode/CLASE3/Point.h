#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;

public:
    
    Point(int valX = 0, int valY = 0);

    
    int getX() const;
    int getY() const;

    
    void display() const;

    
    int IzquierdaDe(const Point& other) const;
    int DerechaDe(const Point& other) const;
    int ArribaDe(const Point& other) const;
    int AbajoDe(const Point& other) const;

    
    double distancia(const Point& other) const;
};

#endif