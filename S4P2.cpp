#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length,breadth;
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
};
void Display(Rectangle r){
    cout<<"length="<< r.length<<endl;
    cout<<"breadth="<< r.breadth<<endl;
}
void scale(Rectangle &r)
{
    r.length*=2;
    r.breadth*=2;
    cout<<"length="<< r.length<<endl;
    cout<<"breadth="<< r.breadth<<endl;
}
    int main ()
    {
        Rectangle r(10,20);
        Display(r);
        scale(r);
    return 0;
}