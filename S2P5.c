#include<stdio.h>
void transpose(int *mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(mat + j * n + i));
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (*(matrix + i) + j));
        }
    }
    printf("Transposed matrix:\n");
    transpose((int *)matrix, n);
    return 0;
}