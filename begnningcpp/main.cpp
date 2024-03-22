#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	printf("hello "); // stdio.h
  cout << "world\n"; // iostream
	
  string str {"Hello"};
  const char* start = str.c_str();
  const char* end = str.c_str() + str.size() - 1;
  cout << "start:" << start << ":" << &start << endl;
  cout << "end:" << end << ":" << &end << ":" << *end << endl;
  end--;
  cout << "end:" << end << ":" << &end << ":" << *end << endl;

  vector<string> v {"a","b","c"};
  for(auto const &e: v)
    cout << e << " ";
  cout << endl;
  return 0;
}

