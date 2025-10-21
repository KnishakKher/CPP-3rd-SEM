#include<iostream>
using namespace std;
class Rectangle {
    public:
    int length;
    int width;
    int area();
};
int Rectangle::area() {
    return length*width;
}
int main()
{
    Rectangle r1;
    r1.length = 10;
    r1.width = 5;
    cout << "Area of rectangle: " << r1.area() << endl;
    return 0;
}