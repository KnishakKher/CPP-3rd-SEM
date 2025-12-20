#include <iostream>
using namespace std;

class Flight
{
public:
    int flightNo;
    string source;
    string destination;
    int seatsAvailable;

    void getData()
    {
        cout<<"Enter flight number, source, destination and seats available:"<<endl;
        cin >> flightNo >> source >> destination >> seatsAvailable;
    }
};

int main()
{
    int n;
    cout<<"Enter number of flights:"<<endl;
    cin >> n;

    Flight *flights = new Flight[n];

    for (int i = 0; i < n; i++)
    {
        flights[i].getData();
    }

    string dest;
    cout << "Enter destination to search for:" << endl;
    cin >> dest;

    for (int i = 0; i < n; i++)
    {
        if (flights[i].destination == dest)
        {
            cout <<"Available flight number: "<< flights[i].flightNo << endl;
        }
    }

    delete[] flights;
    return 0;
}