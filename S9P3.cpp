#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cout << "Enter number of pairs:" << endl;
    cin >> N;

    vector<pair<int, int>> v(N);
    cout << "Enter the pairs (first second):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) {
        if (p1.second == p2.second)
            return p1.first < p2.first;
        return p1.second < p2.second;
    });

    for (auto p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}