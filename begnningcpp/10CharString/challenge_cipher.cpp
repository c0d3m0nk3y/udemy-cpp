#include <iostream>
#include <string>

using namespace std;

string rot13(string);

int main (int argc, char *argv[]) {
  string input {};

  cout << "Input message to cypher:" << endl;
  getline(cin, input);
  string cipher = rot13(input);

  cout << "Cipher: " + cipher << endl;
  cout << "Decypher: " << rot13(cipher) <<endl;

  cout << endl;
  return 0;
}

string rot13(string s) {
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
  string output {};

  for (char c: s)
    output += (isalpha(c) ? key.at(alphabet.find(c)) : c);
  
  return output;
}
