#include "Board.hpp"
#include <iostream>

using namespace std;

int main() {
    Board b(10,20, 'o');
    Point p1(2,2), p2(3, 12), p3(8,2), p4(8,16);

    b.DrawLine(p1, p2, '0');


    b.Display();

    return 0;
}
