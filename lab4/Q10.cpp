#include<iostream>
using namespace std;

class AttendanceManager;

class Classroom {
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;

public:
    Classroom(string name, int total) {
        className = name;
        totalStudents = total;
        presentStudents = 0;
        attendanceStatus = false;
    }

    friend class AttendanceManager;
};

class AttendanceManager {
public:
    void display(Classroom &c) {
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;
        cout << "Absent Students: "
             << c.totalStudents - c.presentStudents << endl;
        cout << "Attendance: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    void updatePresent(Classroom &c, int present) {
        if(present >= 0 && present <= c.totalStudents)
            c.presentStudents = present;
    }

    void completeAttendance(Classroom &c) {
        c.attendanceStatus = true;
    }

    void checkAttendance(Classroom &c) {
        cout << (c.attendanceStatus ?
                 "Attendance Completed" :
                 "Attendance Not Completed") << endl;
    }

    void absentStudents(Classroom &c) {
        cout << "Absent Students: "
             << c.totalStudents - c.presentStudents << endl;
    }
};

int main() {
    Classroom c("CSE-B1", 60);
    AttendanceManager manager;

    manager.updatePresent(c, 52);
    manager.completeAttendance(c);
    manager.display(c);
    manager.checkAttendance(c);
    manager.absentStudents(c);

    return 0;
}