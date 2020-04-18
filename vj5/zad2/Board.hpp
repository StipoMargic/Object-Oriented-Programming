//
// Created by stipo on 08. 04. 2020..
//

#ifndef ZAD2_BOARD_HPP
#define ZAD2_BOARD_HPP

#include <vector>

typedef struct Point {
  double mX;
  double mY;

  Point(double x, double y) : mX(x), mY(y) {}
} Point;

class Board {
 public:
  Board(int height, int width, char symbolToDraw);
  Board();
  Board(const Board& otherBoard);

  ~Board() { delete[] mA; }

  void Display();
  void DrawChar(const Point &p, char symbolToDraw = 'x');
  void DrawLineUp(const Point& p1, const Point& p2, char symbol);
  void DrawLine(const Point &p1, const Point &p2, char symbolToDraw = 'x');
  void DrawHorizontal(const Point &p1, const Point &p2, char symbolToDraw = 'x');
  void DrawVertical(const Point &point, const Point &point1, char symbol);
 private:
 public:
  int mHeight;
  int mWidth;
  char mSymbolToDraw;
  char **mA;
  bool IsValidCoords(const Point &point) const;

};

#endif //ZAD2_BOARD_HPP
