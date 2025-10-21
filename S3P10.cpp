#include<iostream>
using namespace std;
class Report{
    public:
    string name;
    int rollNo;
    int marks[5];
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
     void calculateGrade() {
        int total = 0;
        for (int i = 0; i < 5; i++){
         total += marks[i];
        }
        float percentage = total / 5.0;
        string grade;
         if (percentage >= 75) grade = "A";
        else if (percentage >= 60) grade = "B";
        else if (percentage >= 40) grade = "C";
        else grade = "Fail";
        cout << "Total Marks: " << total << " Percentage: " << percentage << " Grade: " << grade << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Report r[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        r[i].input();
    }

    for (int i = 0; i < n; i++) {
        cout << "\nReport Card for student " << i + 1 << ":\n";
        r[i].display();
        r[i].calculateGrade();
    }
    return 0;
}