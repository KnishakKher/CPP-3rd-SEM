#include <stdio.h>
int main() {
    int arr[5] = {1,5,2,6,9};
    int*p = arr;
    printf("the elements of the array are \n");
    for ( int i = 0;i < 5; i++) {
        printf("%d\n",*p);
        p++;
    } return 0;
}