#include <iostream>
using namespace std;

class Score {
    int s;

public:
    Score(int x = 0) {
        s = x;
    }

    void operator++() {
        ++s;
        
    }

    void operator++(int) {

        s++;
    }

    void display() {
        cout << s << endl;
    }
};

int main() {
    Score a(10);

     ++a;
    cout << "Prefix result: ";
    a.display();

    a++;
    cout << "Postfix result: ";
    a.display();

    cout << "Final score: ";
    a.display();

    return 0;
}