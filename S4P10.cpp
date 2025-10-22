#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
    Employee(int i, float s){
        id = i;
        salary = s;
    }
    void display(){
        cout<<"ID: "<<id<<" Salary: "<<salary<<endl;
    }
    void updateSalary(Employee &e){
        salary=e.salary;
    }
};
void swap(Employee *e1, Employee *e2) {
    float temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}
int main(){
    Employee e1(1, 50000.0);
    Employee e2(2, 67000.0);
    cout<<"Before swapping:"<<endl;
    e1.display();
    e2.display();
    cout<<"After updating salary of e1:"<<endl;
    e1.updateSalary(e2);
    e1.display();
    swap(&e1, &e2);
    cout<<"After swapping:"<<endl;
    e1.display();
    e2.display();
    return 0;
}