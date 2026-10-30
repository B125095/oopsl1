#include <iostream>
using namespace std;

class Sensor {
protected:
    int id;

public:
    Sensor(int i) {
        id = i;
    }
};

class Temperature : virtual public Sensor {
protected:
    double temp;

public:
    Temperature(int i, double t) : Sensor(i) {
        temp = t;
    }
};

class Humidity : virtual public Sensor {
protected:
    double humidity;

public:
    Humidity(int i, double h) : Sensor(i) {
        humidity = h;
    }
};

class FarmMonitor : public Temperature, public Humidity {
public:
    FarmMonitor(int i, double t, double h)
        : Sensor(i), Temperature(i, t), Humidity(i, h) {}

    void display() {
        cout << "Sensor ID: " << id << endl;
        cout << "Temperature: " << temp << " C" << endl;
        cout << "Humidity: " << humidity << "%" << endl;

        if (temp > 35 || humidity > 80)
            cout << "Warning: Unsafe Farm Conditions!" << endl;
        else
            cout << "Farm Conditions Normal" << endl;
    }
};

int main() {
    FarmMonitor f(101, 38, 85);
    f.display();

    return 0;
}