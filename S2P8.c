#include <stdio.h>

int main() {
    int arr[3][3][3];
    int *ptr = (int *)arr;

    printf("Enter 27 elements for 3x3x3 cube:\n");
    for (int i = 0; i < 27; i++) {
        scanf("%d", ptr + i); 
    }

    printf("3D Matrix Display:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int mat = i * 9 + j * 3 + k;
                printf("%d ", *(ptr + mat));  
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}