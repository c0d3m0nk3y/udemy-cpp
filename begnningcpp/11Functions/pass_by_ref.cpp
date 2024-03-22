#include <iostream>
#include <vector>

using namespace std;

void modify_int(int &, int);
void print_vector(const vector<int> &);

int main (int argc, char *argv[]) {
  int i {10};
  modify_int(i, 50);
  cout << i << endl;

  vector<int> vec {1, 2, 3, 4, 5};
  print_vector(vec);

  cout << endl;
  return 0;
}

void modify_int(int &i, int value) {
  i = value;
}

void print_vector(const vector<int> &vec) {
  for (auto i: vec)
    cout << i << endl;
}
