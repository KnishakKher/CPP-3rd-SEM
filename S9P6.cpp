#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements:" << endl;
    cin >> N;

    map<string, int> freq;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        freq[word]++;
    }

    for (auto p : freq) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}