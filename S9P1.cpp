#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> vec ;
     int N ;
    cout<<"Enter the number of elements of the vector:"<<endl;
    cin>>N;
    cout<<"Enter elements of vector:"<<endl;
    for(int i = 0; i < N; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int X;
    cout<<"enter the element to insert:"<<endl;
    cin>>X;
    int P;
    cout<<"enter the position to insert the element:"<<endl;
    cin>>P;
    if (P < N && P >= 0){
        vec.insert(vec.begin() + P,X);
    } else {
        cout<<"invalid position"<<endl;
    }
    cout<<"The elements of the vector are:";
    for(int j = 0; j < N ;j++ ){
        cout<<vec.at(j)<<" ";}
    return 0;
}