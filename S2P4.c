#include <stdio.h>
void addition(int *a, int *b, int *sum, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(sum + i*n + j) = *(a + i*n + j) + *(b + i*n + j);
        }
    }
}
int main() {
    int m, n;
    int a[10][10], b[10][10], sum[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (*(a + i) + j));
        }
    }
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (*(b + i) + j));
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    addition((int *)a, (int *)b, (int *)sum, m, n);
    printf("Sum of Matrix A and B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }
    return 0;
}