#include <iostream>
#include <string>

class Account {
  private:
    int id;
    double balance;
    std::string name;

  public:
    std::string get_name() { return name; }
    int get_id() { return id; }
    int get_balance() { return balance; }
    void set_name(std::string name) { this->name = name; }
    Account(int id = 1, double balance = 0, std::string = "unnamed");
    Account(const Account &source);
    ~Account() { std::cout << "Destruct " << id << " " << balance << " " << name << std::endl; }
};

Account::Account(int id, double balance, std::string name)
  : id{id}, balance{balance}, name{name} {
    std::cout << "Account " << id << " " << balance << " " << name << std::endl;
  }

Account::Account(const Account &source)
  // : Account{source.id, source.balance, source.name} // DELEGATE
  : id{source.id + 1}, balance{source.balance}, name{"copy"} {
    std::cout << "Copied " << id << " " << balance << " " << name << std::endl;
  }

void show_account(Account a) {
  std::cout << "Act " << a.get_id() << " " << a.get_balance() << " "  << a.get_name() << std::endl;
}

int main(int argc, char *argv[]) {
  Account ac1;
  ac1.set_name("dave");
  show_account(ac1);
  
  return 0;
}
