#include <iostream>
using namespace std;

class TrafficSignal {
public:
    virtual void getGreenDuration(int vehicleCount) {
        cout << "Green Duration" << endl;
    }
};

class UrbanSignal : public TrafficSignal {
public:
    void getGreenDuration(int vehicleCount) override {
        int time = 10 + 2 * vehicleCount;

        if (time > 60)
            time = 60;

        cout << "Urban Signal: " << time << " seconds" << endl;
    }
};

class HighwaySignal : public TrafficSignal {
public:
    void getGreenDuration(int vehicleCount) override {
        int time = 15 + 3 * vehicleCount;

        if (time > 90)
            time = 90;

        cout << "Highway Signal: " << time << " seconds" << endl;
    }
};

int main() {
    UrbanSignal u;
    HighwaySignal h;

    TrafficSignal *p;

    p = &u;
    p->getGreenDuration(20);

    p = &h;
    p->getGreenDuration(20);

    return 0;
}