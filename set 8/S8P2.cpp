#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    ifstream myfile("Hello.txt");
    if (myfile.is_open()) {
        string line;
        string word;
        char character;
        while (myfile.get(character)){
            y++;
        }
        myfile.clear();
        myfile.seekg(0);
        while (myfile>>word){
            x++;
        }
        myfile.clear();
        myfile.seekg(0);
        while (getline(myfile,line)){
            z++;
        }
        
        cout<<"number of words is :"<<x<<endl;
        cout<<"number of characters is:"<<y<<endl;
        cout<<"number of lines is :"<<z<<endl;
        myfile.close();
    }else {
            cout<<"could not open the file";
        }
    return 0;
}