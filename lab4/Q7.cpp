#include<iostream>
using namespace std;

class MuseumManager;

class Exhibit {
private:
    string name;
    int id;
    int visitors;
    bool displayStatus;

public:
    Exhibit(string n, int i) {
        name = n;
        id = i;
        visitors = 0;
        displayStatus = false;
    }

    friend class MuseumManager;
};

class MuseumManager {
public:
    void display(Exhibit &e) {
        cout << "Exhibit Name: " << e.name << endl;
        cout << "Exhibit ID: " << e.id << endl;
        cout << "Visitors: " << e.visitors << endl;
        cout << "Status: "
             << (e.displayStatus ? "Open" : "Closed") << endl;
    }

    void addVisitors(Exhibit &e, int n) {
        e.visitors += n;
    }

    void resetVisitors(Exhibit &e) {
        e.visitors = 0;
    }

    void openExhibit(Exhibit &e) {
        e.displayStatus = true;
    }

    void closeExhibit(Exhibit &e) {
        e.displayStatus = false;
    }

    void checkStatus(Exhibit &e) {
        cout << (e.displayStatus ? "Exhibit is Open" :
                                   "Exhibit is Closed") << endl;
    }
};

int main() {
    Exhibit e("xyz", 101);
    MuseumManager manager;

    manager.openExhibit(e);
    manager.addVisitors(e, 50);
    manager.display(e);
    manager.checkStatus(e);
    manager.addVisitors(e,50);
    manager.closeExhibit(e);
    manager.display(e);
    manager.checkStatus(e);
    return 0;
}