#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account {
  private:
    int id;
    double balance {0};
  public:
    Account();
    Account(double);
    Account(int, double);
    Account(int, int, int = 1);
    ~Account();
    void set_balance(double);
    double get_balance();
};

#endif // !_ACCOUNT_H_
