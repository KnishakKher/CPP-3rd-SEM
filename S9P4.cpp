#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements:" << endl;
    cin >> N;

    set<int> s;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    int X;
    cout << "Enter element to search for:" << endl;
    cin >> X;

    if (s.find(X) != s.end())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}