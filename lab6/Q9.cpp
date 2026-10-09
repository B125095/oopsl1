#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    Matrix(int x, int y, int z, int w) {
        a[0][0] = x;
        a[0][1] = y;
        a[1][0] = z;
        a[1][1] = w;
    }

    Matrix operator+(Matrix m) {
        return Matrix(
            a[0][0] + m.a[0][0],
            a[0][1] + m.a[0][1],
            a[1][0] + m.a[1][0],
            a[1][1] + m.a[1][1]
        );
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix a(1, 2, 3, 4);
    Matrix b(5, 6, 7, 8);

    cout << "First matrix:\n";
    a.display();

    cout << "Second matrix:\n";
    b.display();

    Matrix c = a + b;

    cout << "Result matrix:\n";
    c.display();

    return 0;
}