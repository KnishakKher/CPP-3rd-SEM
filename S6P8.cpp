#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;

public:
    void setSubject(string s) {
        subject = s;
    }
};

class Student : virtual public Person {
protected:
    string course;

public:
    void setCourse(string c) {
        course = c;
    }
};

class TA : public Teacher, public Student {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    TA ta;

    ta.setName("Knishak");
    ta.setSubject("OOP");
    ta.setCourse("CSE");

    ta.display();
    return 0;
}