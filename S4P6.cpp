#include<iostream>
using namespace std;
class Box{
    public:
    float length;
    float width;
    float height;
    Box(float l,float w,float h){
        length=l;
        width=w;
        height=h;
    }
     float volume() {
        return length * width * height;
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Volume: "<<volume()<<endl;
    }
    void compare(Box b) {
        float vol1 = volume();     
        float vol2 = b.volume();     
        if (vol1 > vol2)
            cout<<"Box 1 is larger in volume"<<endl;
        else if (vol1 < vol2)
            cout <<"Box 2 is larger in volume"<<endl;
        else
            cout<<"Both boxes have equal volume"<<endl;
    }
};
int main(){
    Box b1(3.0,2.0,4.0);
    Box b2(2.0,3.0,5.0);
    cout<<"Box 1 details:"<<endl;
    b1.display();
    cout<<"Box 2 details:"<<endl;
    b2.display();
    b1.compare(b2);
    return 0;
}