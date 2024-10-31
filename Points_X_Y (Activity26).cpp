
#include "Header.h"
#include <iostream>
using namespace std;

//Function definitions

bool operator== (const Point& first, const Point& second) {
    return (
        first.x == second.x &&
        first.y == second.y
        );
}

ostream& operator<< (ostream& stream, const Point& point) {
    return stream << "(" << point.x << " , " << point.y << ")";
}

