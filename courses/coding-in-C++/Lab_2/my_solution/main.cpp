#include "bank_account.hpp"
#include <iostream>

int main() {
    BankAccount my_bank_account;
    my_bank_account.setOwner("Schlionel");
    std::cout << "Owner is " << my_bank_account.getOwner() << '\n';
    
    my_bank_account.deposit(500.5);
    
}