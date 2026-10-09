#include <iostream>
using namespace std;

class InventoryItem {
    int id, quantity;
    float price;

public:
    InventoryItem(int i, float p, int q) {
        id = i;
        price = p;
        quantity = q;
    }

    InventoryItem operator+(InventoryItem x) {
        if (id == x.id && price == x.price)
            return InventoryItem(id, price, quantity + x.quantity);

        cout << "Incompatible items!" << endl;
        return *this;
    }

    void display() {
        cout << "ID: " << id
             << ", Price: " << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem a(101, 50, 10);
    InventoryItem b(101, 50, 5);

    InventoryItem c = a + b;

    cout << "Combined item: ";
    c.display();

    cout << "Original item 1: ";
    a.display();

    cout << "Original item 2: ";
    b.display();

    return 0;
}