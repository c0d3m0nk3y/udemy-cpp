#include <iostream>
#include <string>

class Account {
  private:
    int id;
    std::string name;
    double balance;

  public:
    Account();
    Account(std::string);
    Account(int, std::string);
    Account(int, std::string, double);
};

Account::Account(int id, std::string name, double balance)
  : id{id}, name{name}, balance{balance} {
    std::cout << "Account::Account(int, str, dbl)" << std::endl;
  }

Account::Account()
  : Account {0, "Name", 0} {
    std::cout << "Account::Account()" << std::endl;
  }

Account::Account(std::string name)
  : Account {0, name, 0} {
    std::cout << "Account::Account(str)" << std::endl;
  }

Account::Account(int id, std::string name)
  : Account {id, name, 0} {
    std::cout << "Account::Account(int, str)" << std::endl;
  }

int main (int argc, char *argv[]) {
  Account a1;
  Account a2 {"Bob"};
  Account a3 {1, "Dave"};
  Account a4 {2, "Jerry", 100};
  
  return 0;
}
