#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float basicSalary, hra, da, netSalary;

    Employee()
    {
        netSalary = 0;
    }

    Employee(int i, string n, float b, float h, float d)
    {
        id = i;
        name = n;
        basicSalary = b;
        hra = h;
        da = d;
        netSalary = basicSalary + hra + da;
    }

    void display()
    {
        cout << id << " " << name << " " << netSalary << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of employees:" << endl;
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        float b, h, d;
        cout << "Enter id, name, basic salary, HRA and DA:" << endl;
        cin >> id >> name >> b >> h >> d;
        emp[i] = Employee(id, name, b, h, d);
    }
     for (int i = 0; i < n; i++)
    {
       
            emp[i].display();
        
    }

    for (int i = 0; i < n; i++)
    {
        if (emp[i].netSalary > 50000)
        {
            cout << "Employees with salary greater than 50000:" << endl;
            emp[i].display();
        }
    }
    
    return 0;
}