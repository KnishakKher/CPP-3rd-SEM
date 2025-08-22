#include <stdio.h>
int sum(int*a,int*b) {
    int sum = *a + *b;
    return sum;
} int main () {
int a = 12;
int b = 13;
int c = sum(&a,&b);
printf("The sum of %d and %d is %d ",a,b,c);
return 0;
}