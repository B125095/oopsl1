#include <iostream>
using namespace std;

class Bill {
    int items;
    float amount;

public:
    Bill(int i, float a) {
        items = i;
        amount = a;
    }

    Bill operator+(Bill b) {
        return Bill(items + b.items, amount + b.amount);
    }

    bool operator>(Bill b) {
        return amount > b.amount;
    }

    void display() {
        cout << "Items: " << items
             << ", Total amount: " << amount << endl;
    }
};

int main() {
    Bill a(3, 500), b(2, 300);

    Bill c = a + b;

    cout << "First bill: ";
    a.display();

    cout << "Second bill: ";
    b.display();

    cout << "Combined bill: ";
    c.display();

    cout << "First bill > Second bill: "
         << (a > b) << endl;

    return 0;
}