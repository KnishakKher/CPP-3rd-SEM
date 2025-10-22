#include<iostream>
using namespace std;
class Account{
    float balance;
    public:
    Account(float b){
        balance=b;
    }
    void display(){
        cout<<"Balance: "<<balance<<endl;
    }
    void transfer(Account *acc, int amount) {
        if (balance >= amount) {
            balance -= amount;  
            acc->balance += amount;
            cout<<"Transfer successful"<<endl;
        } else {
            cout<<"Insufficient balance"<<endl;
        }
    }
};
int main(){
    Account a1(5000);
    Account a2(10000);
    a1.transfer(&a2, 2000);
    a1.display();
    a2.display();
    return 0;
}