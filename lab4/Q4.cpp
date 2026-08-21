#include<iostream>
using namespace std;

class ElectricMeter {
private:
    int meterNumber;
    string consumerName;
    int units;

public:
    ElectricMeter(int n, string name, int u) {
        meterNumber = n;
        consumerName = name;
        units = u;
    }

    friend void check(ElectricMeter e);
};

void check(ElectricMeter e) {
    cout << "Meter Number: " << e.meterNumber << endl;
    cout << "Consumer Name: " << e.consumerName << endl;
    cout << "Units Consumed: " << e.units << endl;

    if(e.units < 100)
        cout << "Usage: Low Usage" << endl;
    else if(e.units <= 300)
        cout << "Usage: Moderate Usage" << endl;
    else
        cout << "Usage: High Usage" << endl;
}

int main() {
    ElectricMeter e(101, "Ranjan", 250);
    check(e);

    return 0;
}