#ifndef BUYER_H
#define BUYER_H

#include <cstddef>
#include <string>
#include "bank_customer.h"

using namespace std;

class Buyer {
private:
    int id;
    string name;
    BankCustomer* account;

public:
    Buyer(int id, const string& name) 
        : id(id), name(name), account(nullptr) {}

    Buyer(int id, const string& name, BankCustomer* account0) 
        : id(id), name(name), account(account0) {}

    int getId() const { return id; }
    string getName() const { return name; }
    BankCustomer* getAccount() { return account; }

    void setId(int newId) { id = newId; }
    void setName(const std::string& newName) { name = newName; }
    void setAccount(BankCustomer* acc) { account = acc; }
};


#endif //BUYER_H