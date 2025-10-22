#include<iostream>
using namespace std;
class Circle{
    public:
    int radius;
    Circle(int r)
    {
        radius=r;
    }
};
void Display(Circle c)
{
    cout<<"radius="<<c.radius<<endl;
}
void increaseRadius(Circle *c)
{
    c->radius+=5;
    cout<<"radius="<<c->radius<<endl;
}
int main()
{
    Circle c(10);
    Display(c);
    increaseRadius(&c);
    return 0;
}