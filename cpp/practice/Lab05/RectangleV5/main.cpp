#include "Rectangle.hpp"

int main() {
    Point p1(1, 2);
    Point p2(3, 4);
    Rectangle r1(p1, p2);
    Rectangle r2(r1);
    cout << r1.toString() << endl;
    cout << r2.toString() << endl;
    
    return 0;
}