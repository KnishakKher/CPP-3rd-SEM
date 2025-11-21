#include<iostream>
using namespace std;
template<class T>
T scaleVector(T arr[], int n, T f){
    for(int i = 0; i < n; i++){
        arr[i] = arr[i]*f;
    }
    return arr[n];
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int f = 4;
    scaleVector<int>(arr,10,f);
    for(int i = 0; i < 10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}