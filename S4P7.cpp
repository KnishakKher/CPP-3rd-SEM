#include<iostream>
using namespace std;
class Time{
    public:
    int hours;
    int minutes;
    Time(int h,int m){
        hours=h;
        minutes=m;
    }
    void display(){
        cout<<"Time: "<<hours<<" hrs "<<minutes<<" min"<<endl;
    }
    void addTime(Time &t)
    {
        hours += t.hours;
        minutes += t.minutes;
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }
};
int main(){
    Time t1(8,19);
    Time t2(4,7);
    t1.addTime(t2);
    t1.display();
    return 0;
}