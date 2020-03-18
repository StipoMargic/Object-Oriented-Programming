#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct vector
{
  int init = 10;
  int psychicalSize = init, logicalSize = 0;
  int *arr;
} vector;

vector newVector()
{
  vector Vector;
  Vector.arr = (int *)malloc(sizeof(int) * Vector.init);

  return Vector;
}

int vectorSize(vector Vector)
{
  return Vector.logicalSize;
}

void vectorDelete(vector &Vector)
{
  free(Vector.arr);
}

int vectorFront(vector &Vector)
{
  return Vector.arr[0];
}

int vectorBack(vector &Vector)
{
  return Vector.arr[Vector.logicalSize];
}

int vectorPop(vector &Vector)
{
  int last = Vector.arr[Vector.logicalSize];
  Vector.logicalSize--;
  return last;
}

void vectorPush(vector &Vector, int n)
{

  Vector.init = Vector.init * 2;
  Vector.arr = (int *)realloc(Vector.arr, sizeof(int) * Vector.init);
  Vector.arr[Vector.logicalSize] = n;
  Vector.logicalSize++;
}

int main()
{
  vector v1;
  v1 = newVector();

  // v1.logicalSize = 2;


  vectorPush(v1, 1);
  int n = vectorSize(v1);
  cout << n << endl;
  cout << v1.arr[0] << endl;
  int l = vectorBack(v1);
  cout << l << endl;

  int e = vectorFront(v1);
  cout << e << endl;
  return 0;
}