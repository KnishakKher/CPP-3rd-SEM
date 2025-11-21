#include <iostream>
using namespace std;
template<class T>
class MinMax {
    T a,b;
    public:
    MinMax(T x, T y){
        a = x;
        b = y;
    }
    void printMinMax(){
        if ( a > b){
            cout<<"The maximum value is : "<<a<<endl;
            cout<<"The minimum value is : "<<b<<endl;
        
        } else {
            cout<<"The maximum value is : "<<b<<endl;
            cout<<"The minimum value is : "<<a<<endl;
        }
    }
};
int main(){
    MinMax <int>AB(15,17);
    AB.printMinMax();
    return 0;
}