#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[]) {
  int scores[] {1,2,3};

  for (auto score: scores)
    cout << score << endl;

  vector<double> temps { 89.9, 21.3, 77.7, 80.88 };
  double average_temp {};
  double total {};

  for (auto temp: temps)
    total += temp;
  average_temp = total / temps.size();

  cout << average_temp << endl;
  cout << fixed << setprecision(1) << average_temp << endl;

  return 0;
}
