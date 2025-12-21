#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("hi.txt", ios::app);

    if (!fout) {
        cout << "File error";
        return 0;
    }

    string line;
    while (true) {
        cout << "Enter data to append (type 'STOP' to end): ";
        getline(cin, line);
        if (line == "STOP")
            break;
        fout << line << endl;
    }

    cout << "Data appended successfully";

    fout.close();
    return 0;
}