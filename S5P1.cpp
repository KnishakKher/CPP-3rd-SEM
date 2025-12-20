#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int marks[5];
    int total;

    void getData()
    {
        total = 0;
         cout<<"Enter rollno , name and marks of 5 exams out of 100:"<<endl;
        cin >> rollNo >> name;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void showData()
    {
       
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Total: " << total << endl;
    }
};

int main()
{
    int n;
    cout<<"enter number of students:"<<endl;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        students[i].getData();
    }

    int topperIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (students[i].total > students[topperIndex].total)
        {
            topperIndex = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        students[i].showData();
    }

    cout << "Highest Scorer -> ";
    students[topperIndex].showData();

    return 0;
}