#include <iostream>

using std::cout, std::endl;

int* apply_all(const int* const, size_t, const int* const, size_t);
void print(const int* const, size_t);

int main (int argc, char *argv[]) {
  int arr1[] {1,2,3,4,5};
  const size_t size1 {5};
  int arr2[] {10,20,30};
  const size_t size2 {3};

  int* result = apply_all(arr1, size1, arr2, size2);
  constexpr size_t size {size1 * size2};
  print(result, size);

  delete [] result;
  
  cout << endl;
  return 0;
}

int* apply_all(const int* const arr1, size_t size1, const int* const arr2, size_t size2) {
  int* result = new int[size1 * size2];
  int index {0};
  for (size_t j {0}; j < size2; j++) {
    for (size_t i {0}; i < size1; i++) {
      result[index] = *(arr1 + i) * *(arr2 + j);
      index++;
    }
  }

  return result;
}

void print(const int* const arr, size_t size) {
  for (size_t i {0}; i < size; i++) {
    cout << *(arr + i) << " ";
  }
  cout << endl;
}
