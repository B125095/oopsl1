#include <iostream>
#include <string>
using namespace std;

class HostelFee {
private:
    string studentName;
    string hostelID;
    float monthlyFee;
    int months;
    char delayed;
    float totalFee, finalAmount;

public:
    void input() {
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Hostel ID: ";
        getline(cin, hostelID);

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> months;

        cout << "Is Payment Delayed? (Y/N): ";
        cin >> delayed;
    }

    void calculateFee() {
        totalFee = monthlyFee * months;

        if (delayed == 'Y' || delayed == 'y')
            finalAmount = totalFee + 500;
        else
            finalAmount = totalFee;
    }

    void display() {
        cout << "Student Name : " << studentName << endl;
        cout << "Hostel ID    : " << hostelID << endl;
        cout << "Monthly Fee  : " << monthlyFee << endl;
        cout << "Months       : " << months << endl;
        cout << "Total Fee    : " << totalFee << endl;

        if (delayed == 'Y' || delayed == 'y')
            cout << "Late Fine    : 500" << endl;
        else
            cout << "Late Fine    : 0" << endl;

        cout << "Final Amount : " << finalAmount << endl;
    }
};

int main() {
    HostelFee h;

    h.input();
    h.calculateFee();
    h.display();

    return 0;
}