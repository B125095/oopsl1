#include <iostream>
using namespace std;

class Ticket {
protected:
    string name;
    int distance;

public:
    Ticket(string n, int d) {
        name = n;
        distance = d;
    }
};

class RailwayTicket : public Ticket {
    double rate;

public:
    RailwayTicket(string n, int d, double r) : Ticket(n, d) {
        rate = r;
    }

    void display() {
        double fare = distance * rate;

        if (distance > 300)
            fare = fare - fare * 0.10;

        cout << "Passenger: " << name << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Final Fare: Rs. " << fare << endl;
    }
};

int main() {
    RailwayTicket t("Ranjan", 400, 2.5);
    t.display();

    return 0;
}