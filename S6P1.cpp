#include<iostream>
using namespace std;
class Person {
    protected:
    int age;
    string name ;
    void get_and_show() {
        cout<<"Enter name and age:"<<endl;
        cin>>name>>age;
        
        cout<<"Name :"<<name<<"Age:"<<age;
    }

};
class Student : public Person {
    public:
     int rollno;
     string course;
     void get_and_show() {
        cout<<"Enter name, age, rollno and course:"<<endl;
        cin>>name>>age>>rollno>>course;
        
        cout<<"Name :"<<name<<"Age:"<<age<<"Rollno:"<<rollno<<"Course:"<<course;
    }

};
int main() {
    Student s1;
    s1.get_and_show();
    return 0;
}

