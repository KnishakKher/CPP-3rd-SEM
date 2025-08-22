#include <stdio.h>//Call by reference
void swap(int*p,int*q) {
    int z = *p;
    *p = *q;
    *q = z;
} int main () {
int a = 12;
int b = 10;
printf("the unswapped values are %d and %d\n",a,b);
swap(&a,&b);
printf("the swapped values are %d and %d",a,b);
return 0;
}