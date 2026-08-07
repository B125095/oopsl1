#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
private:
    string movieName;
    float Price;
    int n;
    float total;

public:
    void input() {
        cin.ignore();

        cout << "Enter Movie Name: ";
        getline(cin, movieName);

        cout << "Enter Ticket Price: ";
        cin >> Price;

        cout << "Enter Number of Tickets: ";
        cin >> n;
    }

    void calculateCost() {
        total = Price * n;
    }

    void display() {
        cout << "Movie Name        : " << movieName << endl;
        cout << "Ticket Price      : " << Price << endl;
        cout << "Number of Tickets : " << n << endl;
        cout << "Total Cost        : " << total << endl;
    }
};

int main() {
    MovieTicket m;

    m.input();
    m.calculateCost();
    m.display();

    return 0;
}