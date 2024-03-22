#include <iostream>

using std::cout, std::endl;

int main (int argc, char *argv[]) {
  int *int_ptr {nullptr};
  int_ptr = new int; // this *should* contain garbage... but it doesn't for me
  cout <<  "int_ptr:" << int_ptr << " *int_ptr:" << *int_ptr << endl;
  delete int_ptr;

  // this *does* contain garbage
  int *gargbage_ptr = new int;
  cout << "gargbage_ptr:" << gargbage_ptr << " *gargbage_ptr:" << *gargbage_ptr << endl;
  delete gargbage_ptr;

  int *array_ptr {nullptr};
  size_t size {};
  size = 10;
  array_ptr = new int[size];
  delete [] array_ptr;
  cout << array_ptr << " " << *array_ptr;

  cout << endl;
  return 0;
}
