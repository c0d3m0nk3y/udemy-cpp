#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main (int argc, char *argv[]) {
  char uninitialised_string[20];
  cout << uninitialised_string << strlen(uninitialised_string) << endl;

  char initialised_string[20] {};
  cout << initialised_string << strlen(initialised_string) << endl;

  strcat (uninitialised_string, "Val");
  cout << uninitialised_string << strlen(uninitialised_string) << endl;
  strcpy(initialised_string, uninitialised_string);
  cout << initialised_string << strlen(initialised_string) << endl;

  char string_spaces[20] {};
  char copy[20] {};
  cin.getline(string_spaces, 20);
  strcpy(copy, string_spaces);
  if(strcmp(string_spaces, copy) == 0)
    cout << "Same" << endl;

  for (size_t i {0}; i < strlen(string_spaces); ++i) {
    if(isalpha(string_spaces[i]))
      string_spaces[i] = toupper(string_spaces[i]);
  }
  cout << string_spaces << endl;

  cout << strcmp(copy, string_spaces) << " " << strcmp(string_spaces, copy) << endl;

  return 0;
}
