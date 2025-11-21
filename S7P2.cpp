#include <iostream>
using namespace std;
template<class T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    cout<<"sum is:"<<endl;
    return sum;
}
int main (){
    int a;
    int arr[a];
    cout<<"Enter the number of elements of the array :"<<endl;
    cin>>a;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i = 0; i<a;i++){
        cin>>arr[i];
    }
    cout<<sumArray(arr,a);
    return 0;
}