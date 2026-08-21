#include<iostream>
using namespace std;

class Participant {
private:
    string name;
    int age;
    string registrationStatus;

public:
    Participant(string n, int a, string s) {
        name = n;
        age = a;
        registrationStatus = s;
    }

    friend void verify(Participant p);
};

void verify(Participant p) {
    cout << "Participant Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Registration Status: " << p.registrationStatus << endl;

    if(p.age >= 18 && p.registrationStatus == "Active")
        cout << "Eligible" << endl;
    else
        cout << "Not Eligible" << endl;
}

int main() {
    Participant p("Ranjan", 20, "Active");
    verify(p);

    return 0;
}