#include <iostream>
using namespace std;
template<class T>
class stringBox{
    T a;
    public:
    void set(T s){
         a = s;
    }
    void get(){
        cout<<a;
    }
};
int main(){
    stringBox<string> hi;
    hi.set("Hello");
    hi.get();
    return 0;
}