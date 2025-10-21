#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    float price;
    Car(string b, float p) {
        brand = b;
        price = p;
    } 
    Car(const Car &c) {
        brand = c.brand;
        price = c.price;
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Car c1("BMW",536544);
    Car c2=c1;
    c1.display();
    c2.display();
    return 0;
}