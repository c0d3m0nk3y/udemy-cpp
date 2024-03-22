#include <iostream>

using std::cout, std::endl;

int main (int argc, char *argv[]) {
  int i {10};
  int j {11};
  
  const int *cannot_modify_value { nullptr };
  cannot_modify_value = &j;
  *cannot_modify_value = 12;

  int *const cannot_point_elsewhere { &i };
  cannot_point_elsewhere = &j;
  *cannot_point_elsewhere = 13;

  const int *const cannot { &i };
  cannot = &j;
  cannot = 14;

  cout << endl;
  return 0;
}
