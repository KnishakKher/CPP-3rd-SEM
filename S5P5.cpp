#include <iostream>
using namespace std;

class Item
{
public:
    int code;
    string name;
    int quantity;

    Item operator+(const Item &other)
    {
        Item result;
        result.code = code;
        result.name = name;
        result.quantity = quantity + other.quantity;
        return result;
    }
};

int main()
{
    Item item1, item2, mergedItem;
    cout<<"Enter code, name and quantity for two items:"<<endl;
    cin >> item1.code >> item1.name >> item1.quantity;
    cin >> item2.code >> item2.name >> item2.quantity;

    if (item1.code == item2.code)
    {
        mergedItem = item1 + item2;
        cout << mergedItem.code << " "
             << mergedItem.name << " " 
             << mergedItem.quantity << endl;
    }

    return 0;
}