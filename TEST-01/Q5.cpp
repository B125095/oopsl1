
#include <iostream>
using namespace std;

class Wallet {
    int id;
    float balance;
    float *transactions;
    int n;

public:
    Wallet() {
        id = 0;
        balance = 0;
        n = 0;
        transactions = nullptr;
    }

    void input() {
        cout << "Enter Wallet ID: ";
        cin >> id;

        cout << "Enter Balance: ";
        cin >> balance;

        cout << "Enter number of transactions: ";
        cin >> n;

        transactions = new float[n];

        cout << "Enter transactions:\n";
        for (int i = 0; i < n; i++)
            cin >> transactions[i];
    }

    void transaction(float amount) {
        balance += amount;
    }

    void transaction(float amount, char type) {
        if (type == 'D' || type == 'd')
            balance += amount;
        else if (type == 'W' || type == 'w')
            balance -= amount;
    }

    void display() {
        cout << "Wallet ID: " << id
             << "\nBalance: " << balance << endl;
    }

    friend void compareWallet(Wallet, Wallet);

    ~Wallet() {
        delete[] transactions;
    }
};

void compareWallet(Wallet a, Wallet b) {
    if (a.balance > b.balance)
        cout << "Wallet 1 has larger balance.\n";
    else if (b.balance > a.balance)
        cout << "Wallet 2 has larger balance.\n";
    else
        cout << "Both wallets have equal balance.\n";
}

int main() {
    Wallet *w = new Wallet[2];

    cout << "Wallet 1:\n";
    w[0].input();

    cout << "Wallet 2:\n";
    w[1].input();

    w[0].transaction(500);
    w[1].transaction(200, 'D');

    w[0].display();
    w[1].display();

    compareWallet(w[0], w[1]);

    delete[] w;
    return 0;
}