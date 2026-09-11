
#include <iostream>
#include <string>
using namespace std;

class Instrument;

class LabSupervisor {
public:
    void check(Instrument *);
    void modify(Instrument *, int);
};

class Instrument {
    int id;
    string name;
    int accessLevel;

public:
    Instrument(int i, string n, int a) {
        id = i;
        name = n;
        accessLevel = a;
    }

    void display() {
        cout << "ID: " << id
             << "\nName: " << name
             << "\nAccess Level: " << accessLevel << endl;
    }

    friend class LabSupervisor;
};

void LabSupervisor::check(Instrument *p) {
    cout << "Current Access Level: " << p->accessLevel << endl;
}

void LabSupervisor::modify(Instrument *p, int level) {
    p->accessLevel = level;
}

int main() {
    Instrument *p = new Instrument(101, "Oscilloscope", 2);

    p->display();

    LabSupervisor s;
    s.check(p);
    s.modify(p, 5);

    cout << "\nAfter Modification:\n";
    p->display();

    delete p;
    return 0;
}