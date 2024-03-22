#include <iostream>

using std::cout, std::endl;

int main (int argc, char *argv[]) {
  int *uninitialised_ptr;
  int *initialised_ptr {nullptr};
  cout << uninitialised_ptr << " " << initialised_ptr << endl;
  return 0;
}
