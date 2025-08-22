#include <stdio.h>//Assuming all integers are not equal
int max(int*a,int*b,int*c) {
    if(*a > *b && *a > *c) {
        printf("%d is the maximum value ",*a);
    } else if(*b > *a && *b > *c) {
        printf("%d is the maximum value ",*b);
    } else {
        printf("%d is the maximum value ",*c);
    }
} int main() {
    int a = 13;
    int b = 45;
    int c = 10;
    max(&a,&b,&c);
    return 0;
}