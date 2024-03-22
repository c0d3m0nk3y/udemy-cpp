class Account {
  private:
    int id {0};
    int balance {0};

  public:
    int get_id();
    int get_balance() const;
};

int Account::get_balance() const {
  this->balance = 1;
}

int main (int argc, char *argv[]) {
  const Account account;
  
  account.get_balance();
  account.get_id();
  
  return 0;
}
