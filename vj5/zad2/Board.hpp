//
// Created by stipo on 08. 04. 2020..
//

#ifndef ZAD2_BOARD_HPP
#define ZAD2_BOARD_HPP

#include <vector>

typedef struct Point {
    double x;
    double y;

    Point(double x, double y);
} Point;

class Board {
public:
    int height;
    int width;
    char symbolToDraw;
    int **A;

    Board(int height, int width, char symbolToDraw);
    Board();

    virtual ~Board();

public:
    void Display();

    bool IsValidCoords(Point point);

    void DrawChar(const Point p, char symbolToDraw = 'x');

    void DrawLineUp(const Point p, char symbolToDraw = 'x');

    void DrawLine(const Point p1, const Point p2, char symbolToDraw = 'x');

    void DrawHorizontal(const Point p1, const Point p2, char symbolToDraw = 'x');

    void DrawVertical(const Point point,const  Point point1, char symbol);
};

#endif //ZAD2_BOARD_HPP
