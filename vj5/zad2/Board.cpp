//
// Created by stipo on 08. 04. 2020..
//

#include "Board.hpp"
#include <iostream>

using namespace std;

// DEFAULT CONSTRUCTOR
Board::Board() {
  this->mHeight = 10;
  this->mWidth = 20;
  this->mSymbolToDraw = '*';

  // dynamically create array of pointers of size Height
  mA = new char *[mHeight];

  // dynamically allocate memory of size width for each row
  for (int i = 0; i < mHeight; i++)
    mA[i] = new char[mWidth];

  // assign values to allocated memory
  for (int i = 0; i < mHeight; i++) {

    for (int j = 0; j < mWidth; j++) {
      if ((i == 0) || (i == mHeight - 1) || (j == 0) || (j == mWidth - 1)) {
        mA[i][j] = mSymbolToDraw;
      } else {
        mA[i][j] = ' ';
      }
    }
  }
}

// Arg CONSTRUCTOR
Board::Board(int height, int width, char symbolToDraw) {
  this->mHeight = height;
  this->mWidth = width;
  this->mSymbolToDraw = symbolToDraw;

	// dynamically create array of pointers of size Height
	mA = new char *[mHeight];

	// dynamically allocate memory of size width for each row
	for (int i = 0; i < mHeight; i++)
		mA[i] = new char[mWidth];

	// assign values to allocated memory
	for (int i = 0; i < mHeight; i++) {

		for (int j = 0; j < mWidth; j++) {
			if ((i == 0) || (i == mHeight - 1) || (j == 0) || (j == mWidth - 1)) {
				mA[i][j] = mSymbolToDraw;
			} else {
				mA[i][j] = ' ';
			}
		}
	}
}

void Board::Display() {
  for (int i = 0; i < Board::mHeight; i++) {
    for (int j = 0; j < Board::mWidth; j++)
      cout << mA[i][j] << " ";

    cout << endl;
  }
}

void Board::DrawChar(const Point &p, char symbolToDraw) {
  if (IsValidCoords(p)) {
    for (int i = 0; i < Board::mHeight; i++) {
      for (int j = 0; j < Board::mWidth; j++)
        if (i == p.mX && j == p.mY) {
          mA[i][j] = symbolToDraw;
        }
    }
  } else {
    cout << "Can't draw char '" << symbolToDraw << "' on position X: " << p.mX << " and Y: " << p.mY << endl;
  }
}

void Board::DrawLineUp(const Point &p, char symbolToDraw) {
  for (int i = 1; i <= int(p.mX); i++) {
    for (int j = 1; j <= (p.mY); j++)
      if (j == int(p.mY)) {
        mA[i][j] = int(symbolToDraw);
      }
  }
}

void Board::DrawLine(const Point &p1, const Point &p2, char symbol) {
  if (p1.mX == p2.mX) {
    DrawHorizontal(p1, p2, symbol);
  } else {
    DrawVertical(p1, p2, symbol);
  }
}

void Board::DrawHorizontal(const Point &p1, const Point &p2, char symbol) {
  int i = p1.mX;
  for (int j = int(p1.mY); j < int(p2.mY); j++)
    mA[i][j] = int(symbol);
}

void Board::DrawVertical(const Point &p1, const Point &p2, char symbol) {
  for (int i = int(p1.mX); i <= int(p2.mX); i++) {
    for (int j = int(p1.mY); j < int(p2.mY); j++)
      if (i == j) {
        mA[i][j] = symbol;
      }
  }
}

bool Board::IsValidCoords(const Point &point) const {
  if (point.mY >= mHeight || point.mY <= 0) {
    cout << "Y Coord is not valid! Try Again!" << endl;
    return false;
  } else if (point.mX >= mWidth || point.mX <= 0) {
    return false;
  }
  return true;
}
Board::Board(const Board& otherBoard)
{
	mA = otherBoard.mA;
	mWidth = otherBoard.mWidth;
	mHeight = otherBoard.mHeight;
	mSymbolToDraw = otherBoard.mSymbolToDraw;
}
