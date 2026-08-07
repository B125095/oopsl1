#include <iostream>
#include <string>
using namespace std;

class HotelRoom {
private:
    int roomNumber;
    string guestName;
    int days;
    float costPerDay;
    float total;

public:
    void input() {
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        cin.ignore();

        cout << "Enter Guest Name: ";
        getline(cin, guestName);

        cout << "Enter Number of Days Stayed: ";
        cin >> days;

        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    void calculateRent() {
        total = days * costPerDay;
    }

    void display() {
        cout << "Room Number : " << roomNumber << endl;
        cout << "Guest Name  : " << guestName << endl;
        cout << "Days Stayed : " << days << endl;
        cout << "Cost/Day    : " << costPerDay << endl;
        cout << "Total Rent  : " << total << endl;
    }
};

int main() {
    HotelRoom h;

    h.input();
    h.calculateRent();
    h.display();

    return 0;
}