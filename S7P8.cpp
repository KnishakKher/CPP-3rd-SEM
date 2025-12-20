#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    string s;
    cout << "Enter a string representing an integer:" << endl;
    cin >> s;

    try {
        if (s[0] == '-') {
            throw invalid_argument("Negative not allowed");
        }

        int num = stoi(s);
        cout << num;
    }
    catch (invalid_argument&) {
        cout << "Negative not allowed";
    }

    return 0;
}