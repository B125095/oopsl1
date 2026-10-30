#include <iostream>
using namespace std;

class Scholarship {
public:
    virtual void calculateAward(double marks, double income) {
        cout << "Scholarship Calculation" << endl;
    }
};

class MeritScholarship : public Scholarship {
public:
    void calculateAward(double marks, double income) override {
        double award;

        if (marks >= 90)
            award = 20000;
        else if (marks >= 80)
            award = 10000;
        else
            award = 0;

        cout << "Merit Scholarship: Rs. " << award << endl;
    }
};

class NeedBasedScholarship : public Scholarship {
public:
    void calculateAward(double marks, double income) override {
        double award = 0;

        if (income < 200000 && marks >= 70)
            award = 25000;

        cout << "Need-Based Scholarship: Rs. "
             << award << endl;
    }
};

int main() {
    MeritScholarship m;
    NeedBasedScholarship n;

    Scholarship *p;

    p = &m;
    p->calculateAward(90, 150000);

    p = &n;
    p->calculateAward(75, 150000);

    return 0;
}