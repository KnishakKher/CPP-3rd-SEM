#include<iostream>
#include<string>
using namespace std;
class Book {
    public:
    string title;
    string author;
    float price;
    void getData() {
        cout << "Enter title, author and price of the book: ";
        cin >> title >> author >> price;
    }
    void displayData() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
int main() {
    Book b1, b2, b3;
    b1.getData();
    b1.displayData();
    b2.getData();
    b2.displayData();
    b3.getData();
    b3.displayData();
    return 0;
}