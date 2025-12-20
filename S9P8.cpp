#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cout << "Enter a string of parentheses:" << endl;
    cin >> s;

    stack<char> st;
    bool balanced = true;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                balanced = false;
                break;
            }
            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (!st.empty())
        balanced = false;

    if (balanced)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}