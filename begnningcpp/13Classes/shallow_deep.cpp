#include <iostream>

class Shallow {
  private:
    int *data;
  public:
    int get_data() { return *data; }
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d) {
  data = new int;
  *data = d;
}

Shallow::Shallow(const Shallow &source) 
  : data(source.data) {
    std::cout << "Copy Shallow" << std::endl;
}

Shallow::~Shallow() {
  delete data;
  std::cout << "~Shallow" << std::endl;
}

class Deep {
  private:
    int *data;
  public:
    int get_data() { return *data; }
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d) {
  data = new int;
  *data = d;
}

Deep::Deep(const Deep &source) 
{
  data = new int;
  *data = *source.data;
  std::cout << "Copy Deep" << std::endl;
}

Deep::~Deep() {
  delete data;
  std::cout << "~Deep" << std::endl;
}

void deep_pass(Deep d) {}
void shallow_pass(Shallow s) {}

int main (int argc, char *argv[]) {
  Deep d1 {1};
  std::cout << d1.get_data() << std::endl;
  deep_pass(d1);
  std::cout << d1.get_data() << std::endl;

  Shallow s1 {100};
  std::cout << s1.get_data() << std::endl;
  shallow_pass(s1);
  // Copy of s1 is created in pass_copy. When it goes out of scope, s is destructed
  // and the data variable on the heap is deleted.  Now s1 is pointing to UB.
  std::cout << s1.get_data() << std::endl;

  std::cout << std::endl;
  return 0;
}
