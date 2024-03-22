#include <iostream>
#include <vector>

class Move {
  private:
    int *data;
  public:
    void set_data(int d) { *data = d; }
    int get_data() { return *data; }
    Move(int d);
    Move(const Move &source);
    Move(Move &&source);
    ~Move();
};

Move::Move(int d) {
  data = new int;
  *data = d;
  std::cout << "Constructor " << d << std::endl;
}

Move::Move(const Move &source) 
  : Move {*source.data} {
  std::cout << "Deep Copy " << *data << std::endl;
}

Move::Move(Move &&source)
  : data{source.data} {
    source.data = nullptr;
    std::cout << "Move " << *data << std::endl;
}

Move::~Move() {
  if (data != nullptr) {
    std::cout << "Destructor " << *data << std::endl;
  } else {
    std::cout << "Destructor nullptr" << std::endl;
  }
  delete data;
}

int main (int argc, char *argv[]) {
  std::vector<Move> v;
  v.push_back(Move{10});
  v.push_back(Move{20});
  return 0;
}
