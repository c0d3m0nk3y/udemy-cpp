#include <ios>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  bool bTrue { true };
  bool bFalse { false };

  cout << "True: " << bTrue << " False: " << bFalse << endl;

  cout << boolalpha;
  cout << "True: " << bTrue << " False: " << bFalse << endl;

  return 0;
}
