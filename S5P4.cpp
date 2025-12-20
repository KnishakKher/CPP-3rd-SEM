#include <iostream>
using namespace std;

class Cricketer
{
public:
    string playerName;
    int matches;
    int runs;
    float average;

    void getData()
    {
        cout<<"Enter player name, matches played and runs scored:"<<endl;
        cin >> playerName >> matches >> runs;
        average = (float)runs / matches;
    }

    void showData()
    {
        cout << playerName << " " << average << endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of cricketers:"<<endl;
    cin >> n;

    Cricketer players[n];

    for (int i = 0; i < n; i++)
    {
        players[i].getData();
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (players[i].average < players[j].average)
            {
                swap(players[i], players[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        players[i].showData();
    }

    return 0;
}