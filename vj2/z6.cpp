#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct vector
{
  int init = 10;
  int psychicalSize = init, logicalSize = 0;
  int *arr;
} vector;

vector newVector(vector Vector)
{
  Vector.arr = (int *)malloc (sizeof(int) * Vector.init);

  return Vector;
}

int vectorSize(vector Vector)
{
  return Vector.logicalSize;
}

vector vectorDelete(vector Vector)
{
  free(Vector.arr);
}

int *vectorFront(vector Vector)
{
  return &Vector.arr[0];
}

int *vectorBack(vector Vector)
{
  return &Vector.arr[Vector.logicalSize];
}

void vectorPop(vector Vector)
{
  Vector.logicalSize--;
}

void vectorPush(vector Vector, int n)
{
  Vector.logicalSize = n;
  Vector.logicalSize++;
}