#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string file;
    cout<<"Enter the file name:"<<endl;
    cin>>file;
    file = file + ".txt";
    ifstream myfile(file);
    if (myfile.is_open()) {
        string line;
        while (getline(myfile,line)){
            cout<<line<<endl;
        }
        myfile.close();
    }else {
            cout<<"could not open the file";
        }
    return 0;
}