#include <stdio.h>//Call by value
void swap(int a,int b){
int z = a;
a = b;
b = z;
printf("the swapped values are %d and %d",a,b);
} int main() {
int x = 5;
int y = 8;
printf("the unswapped values are %d and %d\n",x,y);
swap(x,y);
return 0;
}