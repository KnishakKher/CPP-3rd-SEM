#include <iostream>
using namespace std;

int main()
{
    int cap, m;
    cout << "Enter stack capacity and number of operations:" << endl;
    cin >> cap >> m;

    int stack[5];
    int top = -1;
   

    for (int i = 0; i < m; i++)
    {
        string cmd;
         cout << "Enter operations (push / pop):" << endl;
        cin >> cmd;

        if (cmd == "push")
        {
            int x;
            cout << "Enter value to push:" << endl;
            cin >> x;

            if (top == cap - 1)
            {
                cout << "Full" << endl;
            }
            else
            {
                stack[++top] = x;
            }
        }
        else if (cmd == "pop")
        {
            if (top == -1)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << stack[top--] << endl;
            }
        }
    }

    return 0;
}