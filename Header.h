#ifndef Header_h
#define Header_h

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;

};

//Function declarations
bool operator== (const Point& first, const Point& second);

ostream& operator<< (ostream& stream, const Point& point);

#endif
