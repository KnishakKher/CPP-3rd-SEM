#include <iostream>
using namespace std;

class Book
{
public:
    int bookID;
    string title;
    string author;
    float price;

    void getData()
    {
        cout<<"Enter bookID, title, author and price:"<<endl;
        cin >> bookID >> title >> author >> price;
    }

    void showData()
    {
        cout << bookID << " " << title << " " << author << " " << price << endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of books:"<<endl;
    cin >> n;

    Book books[n];

    for (int i = 0; i < n; i++)
    {
        books[i].getData();
    }

    string searchAuthor;
    cout << "Enter author name to search for:" << endl;
    cin >> searchAuthor;

    for (int i = 0; i < n; i++)
    {
        if (books[i].author == searchAuthor)
        {
            books[i].showData();
        }
    }

    return 0;
}