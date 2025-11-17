#include<iostream>
using namespace std;
class Person {
    public:
    string name;
    void PData(){
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"Name:"<<name<<endl;
    }
};
class Employee:public Person {
    public:
    int ID;
    void EData(){
        PData();
        cout<<"enter ID:"<<endl;
        cin>>ID;
        cout<<"ID:"<<ID<<endl;
    }

};
class Manager:public Employee {
    public:
    int Salary;
    void MData() {
        EData();
        cout<<"enter salary:"<<endl;
        cin>>Salary;
        cout<<"salary:"<<Salary<<endl;
    }
};
int main() {
    Manager emp;
    emp.MData();
    return 0;
}
