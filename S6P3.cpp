#include<iostream>
using namespace std;
class Employee {
    protected:
    int Salary;
    string Id ;
    
    

};
class Manager : public Employee {
    public:
     
     void setSalary() {
        cout<<"Enter ID and Salary:"<<endl;
        cin>>Id>>Salary;
        
        cout<<"ID:  "<<Id<<"Salary:"<<Salary;
    }

};
int main() {
    Manager e1;
    e1.setSalary();
    return 0;
}

