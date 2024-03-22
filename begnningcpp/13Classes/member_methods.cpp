#include <iostream>
#include <string>

class Player {
private:
  std::string name {"Player"};
  int health {100};
  int xp {0};

public:
  bool is_dead();
  void talk(std::string);
  void set_health(int);
};

bool Player::is_dead() {
  return (health == 0);
}

void Player::talk(std::string = "") {
  std::cout << "Hi, my name is " << name << std::endl;
}

void Player::set_health(int health) {
  this->health = health;
}


int main (int argc, char *argv[]) {
  Player p1;
  Player* p2 {nullptr};
  p1.set_health(100);
  std::cout << p1.is_dead() << std::endl;
  p1.talk();

  p2 = new Player();
  (*p2).set_health(0);
  std::cout << p2->is_dead() << std::endl;
  p2->talk();
  delete p2;

  return 0;
}
