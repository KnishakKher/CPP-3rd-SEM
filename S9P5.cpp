#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements:" << endl;
    cin >> N;

    multiset<int> ms;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int X;
    cout << "Enter element to delete one occurrence of:" << endl;
    cin >> X;

    auto it = ms.find(X);
    if (it != ms.end()) {
        ms.erase(it);
    }

    for (int val : ms) {
        cout << val << " ";
    }

    return 0;
}