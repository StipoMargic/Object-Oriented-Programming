#include "Board.hpp"
#include <iostream>

using namespace std;

int main() {
    Point p1(2,2), p2(8,8), p3(8,2), p4(8,16);
    Board b(10,20, 'o');

    b.DrawLine(p1, p2, '0');
    b.DrawLine(p3, p4, 'x');

    b.Display();

    return 0;
}
