//
// Created by stipo on 08. 04. 2020..
//

#include "Board.hpp"
#include <iostream>

using namespace std;

Board::Board(int height, int width, char symbolToDraw) {
    this->height = height;
    this->width = width;
    this->symbolToDraw = symbolToDraw;

    // dynamically create array of pointers of size M
    A = new int *[height];

    // dynamically allocate memory of size N for each row
    for (int i = 0; i < height; i++)
        A[i] = new int[width];

    // assign values to allocated memory
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            if ((i == 0) || (i == height - 1) || (j == 0) || (j == width - 1)) {
                A[i][j] = int(symbolToDraw);
            } else {
                A[i][j] = 32;
            }
}

int Board::getHeight() const {
    return height;
}

void Board::setHeight(int height) {
    Board::height = height;
}

int Board::getWidth() const {
    return width;
}

void Board::setWidth(int width) {
    Board::width = width;
}

int Board::getSymbolToDraw() const {
    return symbolToDraw;
}

void Board::setSymbolToDraw(int symbolToDraw) {
    Board::symbolToDraw = symbolToDraw;
}

void Board::Display() {
    for (int i = 0; i < Board::height; i++) {
        for (int j = 0; j < Board::width; j++)
            std::cout << char(A[i][j]) << " ";

        std::cout << std::endl;
    }
}

Board::~Board() {
    delete[] A;
}

void Board::DrawChar(Point p, char symbolToDraw) {
    for (int i = 0; i < Board::height; i++) {
        for (int j = 0; j < Board::width; j++)
            if (i == p.x - 1 && j == p.y - 1) {
                A[i][j] = int(symbolToDraw);
            }
    }
}

void Board::DrawLineUp(Point p, char symbolToDraw) {
    for (int i = 1; i < Board::height-1; i++) {
        for (int j = 1; j < Board::width-1; j++)
            if (i == p.x - 1) {
                A[i][j] = int(symbolToDraw);
            }
    }
}

void Board::DrawLine(Point p1, Point p2, char symbolToDraw) {
    for (int i = int(p1.x); i < int(p1.y); i++) {
        for (int j = int (p2.x); j < int(p2.y); j++)
            A[i][j] = int(symbolToDraw);
    }
}

Point::Point(double x, double y) : x(x), y(y) {}
