#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  bool bBoolean {true};
  bBoolean ? cout << "Yes" : cout << "No";
  cout << endl;

  int a{10}, b{20};
  (a < b) ? cout << "Less" : cout << "More";
  cout << endl;

  // 0 is false, boolalpha.cpp
  int num{};
  cin >> num;
  (num % 2) ? cout << "Odd" : cout << "Even";
  cout << endl;
  cout << ((num % 2 == 0) ? "Even" : "Odd");
  cout << endl;

  return 0;
}
