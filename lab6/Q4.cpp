#include<iostream>
using namespace std;

class AccountBalance {
    float balance;

public:
    AccountBalance(float b) {
        balance = b;
    }

    AccountBalance operator-() {
        return AccountBalance(-balance);
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    AccountBalance a(5000);

    AccountBalance b = -a;

    cout << "Original account: ";
    a.display();

    cout << "Adjusted account: ";
    b.display();

    return 0;
}

