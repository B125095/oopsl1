
#include <iostream>
using namespace std;

class Drone {
    int id;
    float battery, hours;

public:
    Drone() {
        id = 0;
        battery = 0;
        hours = 0;
    }

    void input() {
        cout << "Enter Drone ID: ";
        cin >> id;
        cout << "Enter Battery: ";
        cin >> battery;
        cout << "Enter Flight Hours: ";
        cin >> hours;
    }

    void update(float b) {
        battery = b;
    }

    void update(float b, float h) {
        battery = b;
        hours = h;
    }

    void display() {
        cout << "ID: " << id
             << " | Battery: " << battery
             << "| %  Hours: " << hours << endl;
    }

    friend void compareBattery(Drone, Drone);
};

void compareBattery(Drone a, Drone b) {
    if (a.battery > b.battery)
        cout << "Drone 1 has higher battery.\n";
    else if (b.battery > a.battery)
        cout << "Drone 2 has higher battery.\n";
    else
        cout << "Both drones have equal battery.\n";
}

int main() {
    Drone *d = new Drone[2];

    for (int i = 0; i < 2; i++)
        d[i].input();
        cout<< "before update:"<<endl;
        d[0].display();
    d[1].display();

    d[0].update(80);
    d[1].update(70, 5);
cout<<" after the update:"<<endl;
    d[0].display();
    d[1].display();

    compareBattery(d[0], d[1]);

    delete[] d;
        return 0;}
