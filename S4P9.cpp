#include<iostream>
using namespace std;
class Matrix{
    public:
    int arr[2][2];
    void input(){
        cout<<"Enter elements of matrix:"<<endl;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin>>arr[i][j];
    }
    void display(){
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
    Matrix add(Matrix &m){
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                 result.arr[i][j]=arr[i][j]+m.arr[i][j];
        return result;
    }
};
int main(){
    Matrix m1, m2, m3;
    m1.input();
    m2.input();
    m3 = m1.add(m2);
    cout<<"Matrix 1:"<<endl;
    m1.display();
    cout<<"Matrix 2:"<<endl;
    m2.display();
    cout<<"Sum Matrix:"<<endl;
    m3.display();
    return 0;
}