#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
    int age;
};

bool compare(Student a, Student b) {
    if (a.marks != b.marks)
        return a.marks > b.marks;
    if (a.age != b.age)
        return a.age < b.age;
    return a.name < b.name;
}

int main() {
    int N;
    cout << "Enter number of elements:" << endl;
    cin >> N;

    vector<Student> students(N);
    cout << "Enter name, marks and age for each student:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].marks >> students[i].age;
    }

    sort(students.begin(), students.end(), compare);

    for (auto s : students) {
        cout << s.name << " " << s.marks << " " << s.age << endl;
    }

    return 0;
}