#include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imag;
     void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    void display() {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1, c2, sum;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    sum = c1.add(c2);
    sum.display();
    return 0;
}