#include <iostream>

using namespace std;

unsigned long long factorial(int);
unsigned long long fibonacci(int);

int main (int argc, char *argv[]) {
  cout << factorial(5) << endl;
  cout << fibonacci(8) << endl;
  cout << endl;
  return 0;
}

unsigned long long factorial(int n) {
  return n ? n * factorial(n - 1) : 1;
}

unsigned long long fibonacci(int n) {
  return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}
