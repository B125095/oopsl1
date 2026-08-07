#include <iostream>
#include <string>
using namespace std;

class MobileRecharge {
private:
    string Number;
    string Name;
    float balance;
    float recharge;
    float Amount;

public:
    void input() {
        cout << "Enter Mobile Number: ";
        cin >> Number;

        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, Name);

        cout << "Enter Current Balance: ";
        cin >> balance;
    }

    void mrecharge() {
        cout << "Enter Recharge Amount: ";
        cin >> recharge;
        balance += recharge;
    }

    void Plan() {
        cout << "Enter Recharge Plan Cost: ";
        cin >> Amount;

        if (Amount <= balance) {
            balance -= Amount;
            cout << "Recharge Successful!" << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display() {
        cout << "Customer Name : " << Name << endl;
        cout << "Mobile Number : " << Number << endl;
        cout << "Updated Balance : " << balance << endl;
    }
};

int main() {
    MobileRecharge m;

    m.input();
    m.mrecharge();
    m.Plan();
    m.display();

    return 0;
}