#include <iostream>
using namespace std;

// Parent class
class Payment {
public:
    virtual void pay(double amount) {
        cout << "Paid " << amount << endl;
    }
};

// One level after Payment
class CashPayment : public Payment {
public:
    void pay(double amount) override { cout << amount << " paid in cash" << endl; }
};

class MobileMoneyPayment : public Payment {
public:
    void pay(double amount) override { cout << amount << " paid by mobile money" << endl; }
};

class CardPayment : public Payment {
public:
    void pay(double amount) override { cout << amount << " paid by card" << endl; }
};

int main() {
    CashPayment cash;
    MobileMoneyPayment momo;
    CardPayment card;

    Payment* p[3] = { &cash, &momo, &card };

    for (int i = 0; i < 3; i++)
        p[i]->pay(5000);   // same call, different behaviour
    return 0;
}
