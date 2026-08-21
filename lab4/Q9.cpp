#include<iostream>
using namespace std;

class WalletManager;

class DigitalWallet {
private:
    string username;
    double balance;
    bool status;

public:
    DigitalWallet(string u, double b) {
        username = u;
        balance = b;
        status = true;
    }

    friend class WalletManager;
};

class WalletManager {
public:
    void display(DigitalWallet &w) {
        cout << "Username: " << w.username << endl;
        cout << "Balance: Rs. " << w.balance << endl;
        cout << "Status: "
             << (w.status ? "Active" : "Disabled") << endl;
    }

    void addMoney(DigitalWallet &w, double amount) {
        if(w.status)
            w.balance += amount;
    }

    void deductMoney(DigitalWallet &w, double amount) {
        if(!w.status) {
            cout << "Wallet is disabled" << endl;
        }
        else if(amount <= w.balance) {
            w.balance -= amount;
            cout << "Money deducted successfully" << endl;
        }
        else {
            cout << "Insufficient balance" << endl;
        }
    }

    void disableWallet(DigitalWallet &w) {
        w.status = false;
        cout << "Wallet disabled" << endl;
    }

    void checkStatus(DigitalWallet &w) {
        cout << (w.status ? "Wallet is Active" :
                              "Wallet is Disabled") << endl;
    }
};

int main() {
    DigitalWallet w("Ranjan", 5000);
    WalletManager manager;

    manager.display(w);
    manager.addMoney(w, 1000);
    manager.deductMoney(w, 2000);
    manager.display(w);
    manager.disableWallet(w);
    manager.checkStatus(w);

    return 0;
}