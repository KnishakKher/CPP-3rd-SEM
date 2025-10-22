#include<iostream>
using namespace std;
class Point
{
    public:
    int x,y;
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
};
void Display(Point p)
{
    int l=p.x+1;
    int m=p.y+1;
    cout<<"x="<<l<<endl;
    cout<<"y="<<m<<endl;
}
int main()
{
    Point p(10,20);
    Display(p);
    cout<<"x="<<p.x<<endl;
    cout<<"y="<<p.y<<endl;
    return 0;
}