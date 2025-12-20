#include <iostream>
using namespace std;

class Product
{
public:
    int id;
    string name;
    float price;
    float discount;

    float getFinalPrice()
    {
        return price - (price * discount / 100);
    }
};

int main()
{
    int n;
    cout << "Enter number of products:" << endl;
    cin >> n;

    Product cart[n];
    float totalAmount = 0;
    cout << "Enter id, name, price and discount for each product:" << endl;
    for (int i = 0; i < n; i++)
    {
       
        cin >> cart[i].id >> cart[i].name >> cart[i].price >> cart[i].discount;
        totalAmount += cart[i].getFinalPrice();
    }

    cout << totalAmount << endl;
    return 0;
}