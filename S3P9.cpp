#include<iostream>
using namespace std;
class Time{
    public:
    int hours;
    int minutes;
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
    Time add(Time t) {
        Time result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;
        if (result.minutes >= 60) {
            result.hours += result.minutes / 60;
            result.minutes = result.minutes % 60;
        }
        return result;
    }
    void display() {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }
};
int main() {
    Time t1, t2, sum;
    cout << "Enter first time:\n";
    t1.input();
    cout << "Enter second time:\n";
    t2.input();
    sum = t1.add(t2);
    sum.display();
    return 0;
}