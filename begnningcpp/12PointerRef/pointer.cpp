#include <iostream>
#include <string>
#include <vector>

using std::cout, std::endl, std::string, std::vector;

int main (int argc, char *argv[]) {
  int num {10};
  cout << "num:" << num << " sizeof:" << sizeof num << " &num:" << &num << endl;

  int *num_p = &num;
  cout << "num_p:" << num_p << " sizeof:" << sizeof num_p << " &num_p:" << &num_p << endl;

  int *p;
  cout << "p:" << p << " sizeof:" << sizeof p << " &p:" << &p << endl;
  p = nullptr;
  cout << "p=nullptr:" << p << " &p:" << &p << endl;

  int *null_p {nullptr};
  cout << "null_p:" << null_p << " sizeof:" << sizeof null_p << " &null_p:" << &null_p << endl;

  int some_value {10};
  int *dereference_some_value {&some_value};
  cout << "dereference:" << *dereference_some_value << endl;
  some_value = 20;
  cout << "dereference:" << *dereference_some_value << endl;

  vector<string> v_str {"a", "b", "c"};
  vector<string> *ptr_v_str {nullptr};
  ptr_v_str = &v_str;
  // . has higer precedence than *
  cout << "(*ptr_v_str).at(1):" << (*ptr_v_str).at(1) << endl;

  for (auto str: *ptr_v_str)
    cout << str;
  cout << endl;

  int *self_ptr {nullptr};
  self_ptr = self_ptr;
  cout << self_ptr << endl;

  int *deref_null_p {nullptr};
  cout << *deref_null_p << endl;

  cout << endl;
  return 0;
}
