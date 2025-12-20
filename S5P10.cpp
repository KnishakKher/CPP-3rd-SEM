#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int marks[3];
    int total;
    char grade;

    void getData()
    {
        total = 0;
        cout<<"Enter rollno , name and marks of 3 exams out of 100:"<<endl;
        cin >> rollNo >> name;
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }

        if (total >= 270)
            grade = 'A';
        else if (total >= 240)
            grade = 'B';
        else
            grade = 'C';
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (students[i].total < students[j].total)
            {
                swap(students[i], students[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " "
             << students[i].rollNo << " "
             << students[i].name << " "
             << students[i].total << " "
             << students[i].grade << endl;
    }

    return 0;
}