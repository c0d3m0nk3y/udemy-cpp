#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (int argc, char *argv[]) {
  size_t current_time = time(nullptr);
  cout << "Epoch: " << current_time << endl;

  srand(current_time);
  cout << "RAND_MAX: " << RAND_MAX << endl;
  cout << "Random: " << rand() << endl;
  int max {20}, min {1};
  cout << rand() % max + min << endl;

  cout << endl;
  return 0;
}
