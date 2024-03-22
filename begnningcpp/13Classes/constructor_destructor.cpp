#include <iostream>
#include "Account.h"

int main (int argc, char *argv[]) {
  Account ac1 {100};
  std::cout << ac1.get_balance() << std::endl;

  Account *ac2 = new Account();
  (*ac2).set_balance(200);
  std::cout << ac2->get_balance() << std::endl;
  delete ac2;

  return 0;
}
