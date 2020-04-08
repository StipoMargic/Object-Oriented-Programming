#include "Board.hpp"
#include <iostream>

using namespace std;

int main() {
    Point p1(2,3);
    Point p2(4,5);

    Board b(20,10, '*');
    b.DrawChar(p1, 'x');
    b.DrawLineUp(p1);
    b.DrawLine(p1,p2);
    b.Display();

    return 0;
}
