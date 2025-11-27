#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string source;
    string destination;
    cout<<"enter the name of the source file:"<<endl;
    cin>>source;
    cout<<"enter the name of the destination file: "<<endl;
    cin>>destination;
    source  = source + ".txt";
    destination = destination + ".txt";
    ifstream infile(source);
    ofstream outfile(destination);
    if(infile.is_open() && outfile.is_open()){
        string line ;
        while(getline(infile,line)){
            outfile<<line<<endl;
        }
        infile.close();
        outfile.close();
        cout<<"file coppied successfully"<<endl;
    }
    return 0;
}