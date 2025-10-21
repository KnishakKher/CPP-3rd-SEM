#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    float salary;
    Employee(int i, float s) {
        id = i;
        salary = s;
    }
    void displayData() {
        cout << "ID: " << id << " Salary: " << salary << endl;
    }
};
int main()
{
    Employee e1(1, 100000);
    Employee e2(2, 20000);
    e1.displayData();
    e2.displayData();
    return 0;
}