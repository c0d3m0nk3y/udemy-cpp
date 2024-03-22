#include <iostream>
#include "Account.h"

Account::Account() : balance{100} {
  std::cout << "Created Account " << this << std::endl;
}

Account::Account(double balance) {
  this->balance = balance;
  std::cout << "Created Account " << this << " with balance " << balance << std::endl;
}

Account::Account(int id, double balance)
  : id{id}, balance{balance} {
    std::cout << "Created Account id " << id << " with balance " << balance << std::endl;
  }

Account::Account(int x, int y, int id)
  : balance{100} {
    this->id = id;
    std::cout << "Created Account x y id " << id << " with balance " << balance << std::endl;
  }

Account::~Account() {
  std::cout << "Destroyed Account " << this << std::endl;
}

void Account::set_balance(double balance) {
  this->balance = balance;
}

double Account::get_balance() {
  return balance;
}
