#include <iostream>
#include <cstring>
using namespace std;

class Locker {
    int lockerNo;
    bool occupied;
    char *code;

public:
    Locker() {
        code = new char[20];
        strcpy(code, "");
        occupied = false;
    }

    void input() {
        cout << "Enter locker number: ";
        cin >> lockerNo;
        cout << "Occupied (1/0): ";
        cin >> occupied;
    }

    void setCode(const char *c) {
        strcpy(code, c);
    }

    void setCode(int pos, char ch) {
        code[pos] = ch;
    }

    void display() {
        cout << "Locker: " << lockerNo
             << " -> Occupied: " << occupied
             << " -> Code: " << code << endl;
    }

    ~Locker() {
        delete[] code;
    }
};

int main() {
    int n;
    cout << "Enter number of lockers: ";
    cin >> n;

    Locker *l = new Locker[n];

    for (int i = 0; i < n; i++) {
        l[i].input();

        char code[20];
        cout << "Enter code: ";
        cin >> code;
        l[i].setCode(code);

        l[i].setCode(0, code[0]);
    }

    for (int i = 0; i < n; i++)
        l[i].display();

    delete[] l;
        return 0;}