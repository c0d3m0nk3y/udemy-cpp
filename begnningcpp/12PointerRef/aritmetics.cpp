#include <iostream>

using std::cout, std::endl;

int main (int argc, char *argv[]) {
  char name[] {"ricky"};
  char *ptr1 = &name[0];
  char *ptr2 = &name[3];
  int n = ptr2 - ptr1;
  cout << n << " " << (ptr2 - ptr1) << " " << (ptr1 - ptr2) << endl;

  int arr[] {1,2,3,-1};
  int *arr_ptr {arr};
  while (*arr_ptr != -1) {
    cout << *arr_ptr;
    arr_ptr++;
  }
  arr_ptr = arr;
  while (*arr_ptr != -1)
    cout << *arr_ptr++;
  cout << endl;


  cout << endl;
  return 0;
}
