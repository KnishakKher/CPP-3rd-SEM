#include <stdio.h>

int main() {
    int arr[2][2][2];
    int *ptr = (int *)arr; 
    int sum = 0;

    printf("Enter 8 elements for 3d array:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", ptr + i); 
    }

    for (int i = 0; i < 8; i++) {
        sum += *(ptr + i); 
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}