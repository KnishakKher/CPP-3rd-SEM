#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number of elements of the vector:"<<endl;
    cin>>N;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        int x;
        cout<<"Enter the elements of the vector:"<<endl;
        cin>>x;
        vec.push_back(x);
    }
    int X;
    cout<<"Enter the element to erase:"<<endl;
    cin>>X;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==X){
            vec.erase(vec.begin()+i);
            i--;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}