#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction {
    int n, d;

    void simplify() {
        int a = abs(n), b = abs(d);
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        if (a != 0) {
            n /= a;
            d /= a;
        }
        if (d < 0) {
            n = -n;
            d = -d;
        }
    }

public:
    Fraction(int x = 0, int y = 1) {
        n = x;
        d = y;
        if (d != 0) simplify();
    }

    Fraction operator+(Fraction f) {
        return Fraction(n * f.d + f.n * d, d * f.d);
    }

    Fraction operator-(Fraction f) {
        return Fraction(n * f.d - f.n * d, d * f.d);
    }

    void display() {
        cout << n << "/" << d << endl;
    }
};

int main() {
    Fraction a(1, 2), b(1, 3);

    cout << "Addition: ";
    (a + b).display();

    cout << "Subtraction: ";
    (a - b).display();

    return 0;
}