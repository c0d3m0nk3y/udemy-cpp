#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
  string xxx (3, 'X');
  string yyy (3, 'Y');
  string concat = xxx + yyy;
  concat[0] = 'A';
  concat.at(1) = 'B';
  for (char c: concat)
    cout << c << "\t";
  cout << endl;
  for (int c: concat)
    cout << c << "\t";
  cout << endl;
  for (size_t i {0}; i < concat.length(); ++i)
    cout << concat.at(i) << "\t";
  cout << endl;
  cout << endl;

  cout << xxx.find('e') << endl;
  cout << string::npos << endl;

  string input {};
  getline(cin, input);
  cout << input << endl;

  return 0;
}
