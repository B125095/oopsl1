#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Salary: ";
        cin >> salary;
    }
    void display() {
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Salary        : " << salary << endl;
    }
    float getSalary() {
        return salary;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;
    Employee *emp = new Employee[n];
    cout << "\nEnter Employee Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].input();
    }
    cout << "\n\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].display();
    }
    int highestIndex = 0;
    float totalSalary = 0;

    for (int i = 0; i < n; i++) {
        totalSalary += emp[i].getSalary();

        if (emp[i].getSalary() > emp[highestIndex].getSalary()) {
            highestIndex = i;
        }
    }
    cout << "\nEmployee with Highest Salary:\n";
    emp[highestIndex].display();
    float averageSalary = totalSalary / n;

    cout << "\nAverage Salary: " << averageSalary << endl;
    delete[] emp;

    return 0;
}