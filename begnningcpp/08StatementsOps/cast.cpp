#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int total_amount {100};
  int total_number {8};
  int average_int {};
  double average {0.0};

  average = total_amount / total_number;
  cout << average << endl;

  average = static_cast<double>(total_amount) / total_number;
  cout << average << endl;

  // 0ld C $tyle
  average_int = (int) average;
  cout << average_int << endl;

	return 0;
}

