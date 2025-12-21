#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("s8p8.txt");
    ofstream fout("s8p8encrypted.txt");

    char ch;
    while (fin.get(ch)) {
        fout.put(ch + 2);
    }

    cout << "File encrypted";

    fin.close();
    fout.close();
    return 0;
}