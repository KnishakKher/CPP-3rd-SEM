#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("search.txt");

    string word, temp;
    cout << "Enter word to search: ";
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    int count = 0;
    while (fin >> temp) {
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if (temp == word)
            count++;
    }

    cout << count;
    fin.close();
    return 0;
}