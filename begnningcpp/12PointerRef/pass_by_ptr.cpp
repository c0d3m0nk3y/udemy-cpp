#include <iostream>
#include <string>
#include <vector>

using std::cout, std::endl, std::vector, std::string;

void add_one(int*);
void add_one(int&);
void print_vector(const vector<string>*);
void print_vector(const vector<string>&);

int main (int argc, char *argv[]) {
  int i {10};
  add_one(&i);
  cout << i << endl;
  add_one(i);
  cout << i << endl;
  
  vector<string> v {"a", "b", "c"};
  print_vector(&v);
  print_vector(v);

  cout << endl;
  return 0;
}

void add_one(int *i) {
  ++*i;
}

void add_one(int &i) {
  i++;
}

void print_vector(const vector<string> *v) {
  for (auto e: *v)
    cout << v << ":" << e << " ";
  cout << endl;
}

void print_vector(const vector<string> &v) {
  for (auto e: v)
    cout << &v << ":" << e << " ";
  cout << endl;
}
