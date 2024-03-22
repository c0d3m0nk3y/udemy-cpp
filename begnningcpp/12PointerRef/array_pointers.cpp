#include <iostream>

using std::cout, std::endl;

int main (int argc, char *argv[]) {
  int arr[] {1,2,3};
  cout << "arr:" << arr << " *arr:" << *arr << endl;
  cout << "(arr+1):" << (arr + 1) << " *(arr+1):" << *(arr + 1) << endl;
  cout << "(arr+4):" << (arr + 4) << " *(arr+4):" << *(arr + 4) << endl;
  cout << "&arr[4]:" << &arr[4] << " arr[4]:" << arr[4] << endl;

  int *arr_ptr {arr};
  cout << "arr_ptr:" << arr_ptr << " *arr_ptr:" << *arr_ptr << endl;
  cout << "(arr_ptr+1):" << (arr_ptr + 1) << " *(arr_ptr+1):" << *(arr_ptr + 1) << endl;
  cout << "(arr_ptr+4):" << (arr_ptr + 4) << " *(arr_ptr+4):" << *(arr_ptr + 4) << endl;
  cout << "&arr_ptr[4]:" << &arr_ptr[4] << " arr_ptr[4]:" << arr_ptr[4] << endl;
  
  cout << endl;
  return 0;
}
