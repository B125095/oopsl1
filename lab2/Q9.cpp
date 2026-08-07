#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float battingAverage;

public:
    void input() {
        cin.ignore();

        cout << "Enter Player Name: ";
        getline(cin, playerName);

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    void calculateAverage() {
        battingAverage = (float)totalRuns / matchesPlayed;
    }

    void display() {
        cout << "Player Name      : " << playerName << endl;
        cout << "Matches Played   : " << matchesPlayed << endl;
        cout << "Total Runs       : " << totalRuns << endl;
        cout << "Batting Average  : " << battingAverage << endl;

        if (battingAverage >= 50)
            cout << "Performance      : Excellent" << endl;
        else if (battingAverage >= 35)
            cout << "Performance      : Good" << endl;
        else if (battingAverage >= 20)
            cout << "Performance      : Average" << endl;
        else
            cout << "Performance      : Poor" << endl;
    }
};

int main() {
    CricketPlayer p;

    p.input();
    p.calculateAverage();
    p.display();

    return 0;
}