#include<iostream>
using namespace std;

class PrinterManager;

class Printer {
private:
    string name;
    int pages;
    int ink;
    bool power;

public:
    Printer(string n, int p, int i) {
        name = n;
        pages = p;
        ink = i;
        power = false;
    }

    friend class PrinterManager;
};

class PrinterManager {
public:
    void display(Printer p) {
        cout << "Printer: " << p.name << endl;
        cout << "Pages Printed: " << p.pages << endl;
        cout << "Ink Level: " << p.ink << "%" << endl;
        cout << "Power: " << (p.power ? "ON" : "OFF") << endl;
    }

    void turnOn(Printer p) {
        p.power = true;
        cout << "Printer turned ON" << endl;
    }

    void turnOff(Printer p) {
        p.power = false;
        cout << "Printer turned OFF" << endl;
    }

    void checkInk(Printer p) {
        cout << "Ink Level: " << p.ink << "%" << endl;
    }

    void resetPages(Printer p) {
        p.pages = 0;
        cout << "Page count reset" << endl;
    }
};

int main() {
    Printer p("HP", 560, 65);
    PrinterManager manager;

    manager.display(p);
    manager.turnOn(p);
    manager.checkInk(p);
    manager.resetPages(p);
    manager.turnOff(p);

    return 0;
}