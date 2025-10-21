#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
     int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    float avg = (float)sum / n;
    printf("Average = %.2f\n", avg);
    free(arr);
    return 0;
}