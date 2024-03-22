#include <iostream>

using namespace std;

void swap(int*, int*);

int main (int argc, char *argv[]) {
  int x {10};
  int y {12};

  cout << x << " " << y << endl;
  swap(x, y);
  cout << x << " " << y << endl;

  return 0;
}

void swap(int *x, int *y) {
  *x += *y;
  *y = *x - *y;
  *x -= *y;
}
