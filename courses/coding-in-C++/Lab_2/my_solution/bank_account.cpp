#include "bank_account.hpp"
#include <iostream>
#include <string>

void BankAccount::setOwner(std::string owner_name) {
    owner = owner_name;
}

std::string BankAccount::getOwner() {
    return owner;
}

void BankAccount::deposit(double deposit_amount) {
    if (deposit_amount > 0) {
        balance += deposit_amount;
    } else {
        std::cout << "Error: Your deposit amount has to be bigger than 0. \n";
    }
}

void BankAccount::withdraw(double withdraw_amount) {
    if (withdraw_amount <= balance) {
        balance -= withdraw_amount;
    } else {
        std::cout << "You don't have enough money to withdraw. \n";
    }
}

double BankAccount::getBalance() {
    return balance;
}

void BankAccount::getAccountInfo() {
    std::cout << "Owner: " + owner << "\nBalance: " << balance;
}