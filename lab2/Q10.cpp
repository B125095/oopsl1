#include <iostream>
#include <string>
using namespace std;

class WaterBill {
private:
    string consumerNumber;
    string consumerName;
    int waterConsumption;
    float bill;

public:
    void input() {
        cin.ignore();

        cout << "Enter Consumer Number: ";
        getline(cin, consumerNumber);

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Water Consumption (in litres): ";
        cin >> waterConsumption;
    }

    void calculateBill() {
        if (waterConsumption <= 500) {
            bill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000) {
            bill = (500 * 2) + ((waterConsumption - 500) * 3);
        }
        else {
            bill = (500 * 2) + (500 * 3) + ((waterConsumption - 1000) * 5);
        }
    }

    void display() {
        cout << "Consumer Number     : " << consumerNumber << endl;
        cout << "Consumer Name       : " << consumerName << endl;
        cout << "Water Consumption   : " << waterConsumption << " litres" << endl;
        cout << "Total Water Bill    : Rs. " << bill << endl;
    }
};

int main() {
    WaterBill w;

    w.input();
    w.calculateBill();
    w.display();

    return 0;
}