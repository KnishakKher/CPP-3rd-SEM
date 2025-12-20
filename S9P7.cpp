#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements:" << endl;
    cin >> N;

    vector<int> arr(N);
    unordered_map<int, int> freq;
    cout << "Enter the elements:" << endl;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    bool found = false;
    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i];
            found = true;
            break;
        }
    }

    if (!found)
        cout << -1;

    return 0;
}