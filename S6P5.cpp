#include<iostream>
using namespace std;
class Shape{
    public:
    int s;
    void area(){
        cout<<"enter length of side :"<<endl;
        int ar;
        cin>>s;
        ar = s*s;
        cout<<"Area is :"<<ar<<endl;
    }
};
class Rectangle : public Shape {
    public:
    int b;
    void area(){
        cout<<"enter length and breadth of the rectangle :"<<endl;
        int lb;
        cin>>s;
        cin>>b;
        lb = s*b;
        cout<<"Area is :"<<lb<<endl;
    }
};
class Circle : public Shape {
    public:
    
    void area(){
        cout<<"enter radius :"<<endl;
        double cr;
        cin>>s;
        cr = 3.14*s*s;
        cout<<"Area is :"<<cr<<endl;
    }

};
int main () {
    Rectangle rec;
    Circle cir;
    rec.area();
    cir.area();
    return 0;
}