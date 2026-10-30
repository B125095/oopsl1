#include <iostream>
using namespace std;

class BackupPolicy {
public:
    virtual void calculateStorage(double size) {
        cout << "Storage Calculation" << endl;
    }
};

class FullBackup : public BackupPolicy {
public:
    void calculateStorage(double size) override {
        cout << "Full Backup Storage: " << size << " MB" << endl;
    }
};

class IncrementalBackup : public BackupPolicy {
public:
    void calculateStorage(double size) override {
        double storage = size * 0.25 + 50;

        cout << "Incremental Backup Storage: "
             << storage << " MB" << endl;
    }
};

int main() {
    FullBackup f;
    IncrementalBackup i;

    BackupPolicy *p;

    p = &f;
    p->calculateStorage(1000);

    p = &i;
    p->calculateStorage(1000);

    return 0;
}