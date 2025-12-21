#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("numbers.txt");
    if(!fin){
        cout<<"Error opening file";
        return 1;
    }

    int num,sum=0,count=0,maxNum,minNum;
    if(!(fin>>num)){
        cout<<"No valid integers found";
        return 0;
    }

    sum=num;
    maxNum=minNum=num;
    count=1;

    while(fin>>num){
        sum+=num;
        count++;
        if(num>maxNum) maxNum=num;
        if(num<minNum) minNum=num;
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Maximum = "<<maxNum<<endl;
    cout<<"Minimum = "<<minNum<<endl;
    cout<<"Count = "<<count<<endl;

    fin.close();
    return 0;
}