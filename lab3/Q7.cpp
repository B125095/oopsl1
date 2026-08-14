#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of character array: ";
    cin >> n;
    char *str = new char[n];

    cout << "Enter a string: ";
    cin.ignore();
    cin.getline(str, n);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z')) {

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    cout << "\nVowels: " << vowels;
    cout << "\nConsonants: " << consonants;
    cout << "\nDigits: " << digits;
    cout << "\nSpaces: " << spaces << endl;

    delete[] str;
    str=nullptr;

    return 0;
}