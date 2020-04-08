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

    virtual ~Board();

public:
    void Display();

    void DrawChar(Point p, char symbolToDraw = 'x');

    void DrawLineUp(Point p, char symbolToDraw = 'x');

    void DrawLine(Point p1, Point p2, char symbolToDraw = 'x');

    int getHeight() const;

    void setHeight(int height);

    int getWidth() const;

    void setWidth(int width);

    int getSymbolToDraw() const;

    void setSymbolToDraw(int symbolToDraw);
};

#endif //ZAD2_BOARD_HPP
