#include <iostream>
using namespace std;
template <class T>
T printTwo(T a , T b) {
    cout<<a<<" "<<b;
    return 0;
}
int main() {
    int x,y;
    cout<<"Enter two integers :"<<endl;
    cin>>x>>y;
    printTwo(x,y);
    return 0;
}