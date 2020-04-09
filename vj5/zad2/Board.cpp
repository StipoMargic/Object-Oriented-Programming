//
// Created by stipo on 08. 04. 2020..
//

#include "Board.hpp"
#include <iostream>

using namespace std;

// DEFAULT CONSTRUCTOR
Board::Board() {
    this->height = 10;
    this->width = 20;
    this->symbolToDraw = '*';

    // dynamically create array of pointers of size Height
    A = new int *[height];

    // dynamically allocate memory of size width for each row
    for (int i = 0; i < height; i++)
        A[i] = new int[width];

    // assign values to allocated memory
    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            if ((i == 0) || (i == height - 1) || (j == 0) || (j == width - 1)) {
                A[i][j] = int(symbolToDraw);
            } else {
                A[i][j] = 32;
            }
        }
    }
}

// Arg CONSTRUCTOR
Board::Board(int height, int width, char symbolToDraw) {
    this->height = height;
    this->width = width;
    this->symbolToDraw = symbolToDraw;

    // dynamically create array of pointers of size Height
    A = new int *[height];

    // dynamically allocate memory of size width for each row
    for (int i = 0; i < height; i++)
        A[i] = new int[width];

    // assign values to allocated memory
    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {
            if ((i == 0) || (i == height - 1) || (j == 0) || (j == width - 1)) {
                A[i][j] = int(symbolToDraw);
            } else {
                A[i][j] = 32;
            }
        }
    }
}

// DESTRUCTOR
Board::~Board() {
    delete[] A;
}

void Board::Display() {
    for (int i = 0; i < Board::height; i++) {
        for (int j = 0; j < Board::width; j++)
            cout << char(A[i][j]) << " ";

        cout << endl;
    }
}


void Board::DrawChar(Point p, char symbolToDraw) {
    if (IsValidCoords(p)) {
        for (int i = 0; i < Board::height; i++) {
            for (int j = 0; j < Board::width; j++)
                if (i == p.x && j == p.y) {
                    A[i][j] = int(symbolToDraw);
                }
        }
    } else {
        cout << "Can't draw char '" << symbolToDraw << "' on position X: " << p.x << " and Y: " << p.y << endl;
    }
}

void Board::DrawLineUp(Point p, char symbolToDraw) {
    for (int i = 1; i <= int(p.x); i++) {
        for (int j = 1; j <= (p.y); j++)
            if (j == int(p.y)) {
                A[i][j] = int(symbolToDraw);
            }
    }
}

void Board::DrawLine(Point p1, Point p2, char symbol) {
    if (p1.x == p2.x) {
        DrawHorizontal(p1, p2, symbol);
    } else {
        DrawVertical(p1, p2, symbol);
    }
}

bool Board::IsValidCoords(Point point) {
    if (point.y >= height || point.y <= 0) {
        cout << "Y Coord is not valid! Try Again!" << endl;
        return false;
    } else if (point.x >= width || point.x <= 0) {
        return false;
    }
    return true;
}

void Board::DrawHorizontal(Point p1, Point p2, char symbol) {
    int i = p1.x;
    for (int j = int(p1.y); j < int(p2.y); j++)
        A[i][j] = int(symbol);
}

void Board::DrawVertical(Point p1, Point p2, char symbol) {
    for (int i = int(p1.x); i <= int(p2.x); i++) {
        for (int j = int(p1.y); j < int(p2.y); j++)
            if (i == j) {
                A[i][j] = int(symbol);
            }
    }
}

Point::Point(double x, double y) : x(x), y(y) {}
