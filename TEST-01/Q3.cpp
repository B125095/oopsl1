
#include <iostream>
using namespace std;

class QueueDisplay {
    int size;
    int *id;

public:
    QueueDisplay() {
        size = 0;
        id = nullptr;
    }

    void input() {
        cout << "Enter queue size: ";
        cin >> size;

        id = new int[size];

        cout << "Enter customer IDs:\n";
        for (int i = 0; i < size; i++)
            cin >> id[i];
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << id[i] << " ";
        cout << endl;
    }

    friend void exchange(QueueDisplay &, QueueDisplay &);

    ~QueueDisplay() {
        delete[] id;
    }
};

void exchange(QueueDisplay &a, QueueDisplay &b) {
    swap(a.size, b.size);
    swap(a.id, b.id);
}

int main() {
    QueueDisplay *q = new QueueDisplay[2];

    cout << "Queue 1:\n";
    q[0].input();

    cout << "Queue 2:\n";
    q[1].input();

    cout << "Before Exchange:\n";
    q[0].display();
    q[1].display();

    exchange(q[0], q[1]);

    cout << "After Exchange:\n";
    q[0].display();
    q[1].display();

    delete[] q;
    return 0;}