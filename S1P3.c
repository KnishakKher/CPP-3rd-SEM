#include <stdio.h>
int incr(int*a) {
    return *a+1;
} int main() {
    int a = 10 ;
    printf("original value is %d \n",a);
    a = incr(&a);
printf("incremented value is %d ",a);
return 0;
}