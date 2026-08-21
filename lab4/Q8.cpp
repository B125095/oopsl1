#include<iostream>
using namespace std;

class ServiceManager;

class VehicleService {
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastService;

public:
    VehicleService(string v, string o, int km) {
        vehicleNumber = v;
        ownerName = o;
        lastService = km;
        serviceDue = false;
    }

    friend class ServiceManager;
};

class ServiceManager {
public:
    void display(VehicleService &v) {
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Last Service: " << v.lastService << " km" << endl;
        cout << "Service Due: "
             << (v.serviceDue ? "No" : "Yes") << endl;
    }

    void completeService(VehicleService &v) {
        v.serviceDue = true;
        cout << "Service completed" << endl;
    }

    void updateKm(VehicleService &v, int km) {
        v.lastService = km;
    }

    void checkService(VehicleService &v) {
        if(v.serviceDue || v.lastService >= 10000)
            cout << "Vehicle requires servicing" << endl;
        else
            cout << "Vehicle does not require servicing" << endl;
    }
};

int main() {
    VehicleService v("OD02AB1234", "Ranjan", 8500);
    ServiceManager manager;

    manager.display(v);
    manager.checkService(v);
    manager.updateKm(v, 10000);
    manager.checkService(v);

    return 0;
}