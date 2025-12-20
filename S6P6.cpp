#include <iostream>
using namespace std;

class Animal {
public:
   
    virtual void speak() {
        cout << "Animal speaks..." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog says: Bow Bow!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Cat says: Meow Meow!" << endl;
    }
};

int main() {
    Animal* ptr; 

    Dog d;
    Cat c;
    d.speak();
    c.speak();

    ptr = &d;
    ptr->speak();  

    ptr = &c;
    ptr->speak(); 

    return 0;
}