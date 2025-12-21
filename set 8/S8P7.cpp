#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("search.txt");
    ofstream fout("empty.txt");

    if (!fin || !fout) {
        cout << "File error";
        return 0;
    }

    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }

    cout << "Copy completed";

    fin.close();
    fout.close();
    return 0;
}