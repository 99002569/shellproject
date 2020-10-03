#include<string.h>
#include<iostream>


class account{

int acc_no;
std::string acc_name;
double balance;

public:
    account();
    account (int,std::string,double);
    account (const account &);

    void credit(double);
    void debit(double);


    int getCustomerId();
    std::string getCustomerName();

    double getBalance();
    void display();

};

