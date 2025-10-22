#include<iostream>
using namespace std;
class Complex
{
    public:
    int real,img;
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
};
void Display(Complex c)
{
    cout<<"real="<<c.real<<endl;
    cout<<"img="<<c.img<<endl;
}
Complex add(Complex c1,Complex c2)
{
    int r=c1.real+c2.real;
    int i=c1.img+c2.img;
    Complex result(r,i);
    return result;
}
int main()
{
    Complex c1(10,20);
    Complex c2(5,10);
    Display(c1);
    Display(c2);
    Complex result=add(c1,c2);
    Display(result);
    return 0;
}