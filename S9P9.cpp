#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements:" << endl;
    cin >> N;

    vector<int> v(N);
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int K;
    cout << "Enter K:" << endl;
    cin >> K;

    priority_queue<int> pq;
    for (int x : v) {
        pq.push(x);
    }

    for (int i = 0; i < K && !pq.empty(); i++) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}