#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(Date x) {
        return day == x.day &&
               month == x.month &&
               year == x.year;
    }

    bool operator!=(Date x) {
        return !(*this == x);
    }
};

int main() {
    Date a(9, 10, 2026), b(9, 10, 2026);

    cout << "Equal: " << (a == b) << endl;
    cout << "Not equal: " << (a != b) << endl;

    return 0;
}