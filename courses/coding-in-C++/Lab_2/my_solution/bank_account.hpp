#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT

#include <string>
class BankAccount{
    private:
        std::string owner;
        // Balance has to be 0 at the beginning
        double balance = 0;
    public:
        void setOwner(std::string owner_name);
        std::string getOwner();
        void deposit(double deposit_amount);
        void withdraw(double withdraw_amount);
        double getBalance();
        void getAccountInfo();
};




#endif