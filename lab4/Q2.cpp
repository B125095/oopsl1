#include<iostream>
using namespace std;

class UserAccount {
private:
    string username;
    int loginAttempts;
    string accountStatus;

public:
    UserAccount(string u, int a, string s) {
        username = u;
        loginAttempts = a;
        accountStatus = s;
    }

    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u) {
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;
    cout << "Account Status: " << u.accountStatus << endl;

    if(u.loginAttempts >= 3)
        cout << "Account Locked" << endl;
    else
        cout << "Account Active" << endl;
}

int main() {
    UserAccount user("Ranjan", 2, "Active");
    checkAccount(user);

    return 0;
}