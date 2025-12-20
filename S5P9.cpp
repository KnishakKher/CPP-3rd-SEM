#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex operator+(const Complex &c)
    {
        return {real + c.real, imag + c.imag};
    }

    Complex operator*(const Complex &c)
    {
        return {
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real};
    }
};

int main()
{
    int n;
    cout<<"Enter number of complex numbers:"<<endl;
    cin >> n;

    Complex arr[n];
    Complex sum = {0, 0};
    Complex product = {1, 0};
    cout<<"Enter real and imaginary parts of each complex number:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].real >> arr[i].imag;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout <<"The sum is: "<< sum.real << " " << sum.imag << endl;
    cout <<"The product is: "<< product.real << " " << product.imag << endl;

    return 0;
}