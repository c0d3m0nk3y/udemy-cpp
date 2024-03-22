#include <iostream>

using namespace std;

void printstatic();

int main (int argc, char *argv[]) {
  printstatic();
  printstatic();
  printstatic();

  cout << endl;
  return 0;
}

void printstatic() {
  static int i {0};
  cout << i;
  i++;
}

