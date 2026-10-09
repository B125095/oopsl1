#include <iostream>
using namespace std;

class Temperature {
    float c;

public:
    Temperature(float x) {
        c = x;
    }

    bool operator>(Temperature t) {
        return c > t.c;
    }

    bool operator<(Temperature t) {
        return c < t.c;
    }

    Temperature operator-() {
        return Temperature(-c);
    }

    void display() {
        cout << c << " Celsius" << endl;
    }
};

int main() {
    Temperature a(30), b(20);

    cout << "First temperature: ";
    a.display();

    cout << "Second temperature: ";
    b.display();

    cout << "First > Second: " << (a > b) << endl;
    cout << "First < Second: " << (a < b) << endl;

    Temperature c = -a;
    cout << "Negated temperature: ";
    c.display();

    return 0;
}