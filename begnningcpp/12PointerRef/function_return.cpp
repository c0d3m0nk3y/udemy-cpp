#include <iostream>

using std::cout, std::endl;

int *return_largest(int*, int*);
int *create_array(size_t, int);

int main (int argc, char *argv[]) {
  int x {10};
  int y {9};

  cout << *return_largest(&x, &y) << endl;

  int *arr = create_array(20, 8);
  cout << arr[1] << endl;
  delete [] arr;

  cout << endl;
  return 0;
}

int *return_largest(int *x, int *y) {
  return (*x > *y) ? x : y;
}

int *create_array(size_t size, int initial=0) {
  int *arr = new int[size]; // this is on the heap
  for(size_t i {0}; i < size; ++i)
    *(arr + i) = initial; // arr[i] = initial;
  return arr;
}
