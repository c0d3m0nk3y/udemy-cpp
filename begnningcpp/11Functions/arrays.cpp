#include <iostream>

using namespace std;

void print_array(const int [], size_t);
void zero_array(int [], size_t);
void print_array_ptr(int *, size_t);

int main (int argc, char *argv[]) {
  int arr[] = {1,2,3,4,5};
  print_array(arr, 5);
  zero_array(arr, 5);
  print_array_ptr(arr, 5);

  cout << endl;
  return 0;
}

void print_array(const int arr[], size_t size) {
  for (size_t i {0}; i < size; i++)
    cout << arr[i] << endl;

  // const cannot be modified
  // arr[0] = 4;
}

void zero_array(int arr[], size_t size) {
  for (size_t i {0}; i < size; i++)
    arr[i] = 0;
}

void print_array_ptr(int *arr, size_t size) {
  for (size_t i {0}; i < size; i++)
    cout << arr[i] << endl;
}
