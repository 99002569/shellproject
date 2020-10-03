#include<iostream>

#include "account.h"

account::account():acc_no(0),acc_name(""),balance(0){}

account::account(int num,std::string name, double bal): acc_no(num),acc_name(name),balance(bal){}

account::account(const account& ref):

acc_no(ref.acc_no),acc_name(ref.acc_name),balance(ref.balance){}

void account::credit(double amount) {
  balance += amount;
}
void account::debit(double amount) {
  //min balance check
  balance -= amount;
}

int account::getCustomerId() {
  return acc_no;
}
std::string account::getCustomerName() {
  return acc_name;
}
double account::getBalance(){
    return balance;
}

void account::display() {
    std::cout << acc_no << "," << acc_name << ","
                                         << balance << "\n";
}


