#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void out_of_bounds_function(char my_array [], size_t size);
void print_vector(vector<char> v);
void print_vector(vector<int> v);
void print_vector_2d(vector <vector<int>> v);
int underflow();

int pause {0};

int main() {
  vector <int> seven_int_init_to_100 (7, 100);
  print_vector(seven_int_init_to_100);

  vector <char> vowels {'a','e','i','o','u'};
  print_vector(vowels);
  
  vowels.push_back('y');
  for (int i {0}; i < vowels.size(); i++) {
      cout << vowels.at(i) << endl;
  }

  vector <vector<int>> vector_2d 
  {
    {1, 2, 3},
    {1, 2, 4},
    {1, 3, 9},
  };
  cout << "vector_2d:\n";
  print_vector_2d(vector_2d);
  
  char myarray [1] = {'c'};
  cout << myarray << endl;
  out_of_bounds_function(myarray, 16);

  char offset[3] {'a', 'b', 'c'};
  cout << 1[offset] << endl;

  underflow();
  
  cout << endl;
  return 0;
}

int underflow() {
  unsigned long long int age {0};
  age--;
  
  cout << age << endl << sizeof(age) << endl << LLONG_MAX << endl;
  
  return 0;
}

void out_of_bounds_function(char my_array [], size_t size) {
  for (size_t i{0}; i < size; i++) {
     cout << "my_array[" << i << "] = " << my_array[i] << endl;
  }
  cout << endl;
}

void print_vector(vector<int> v) {
  for (auto i: v) {
    cout << i << " ";
  }
  cout << endl;
}

void print_vector(vector<char> v) {
  for (auto c: v) {
    cout << c << " ";
  }
  cout << endl;
}

void print_vector_2d(vector <vector<int>> v) {
  for (auto& row: v) {
    for (auto& col: row) {
      cout << col << " ";
    }
    cout << endl;
  }
}
