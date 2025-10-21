#include <stdio.h>

void rowMax(int *mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        int max = *(mat + i * n); 
        for (int j = 1; j < n; j++) {
            int val = *(mat + i * n + j);
            if (val > max) {
                max = val;
            }
        }
        printf("Max of row %d: %d\n", i + 1, max);
    }
}

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (*(matrix + i) + j)); 
        }
    }

    rowMax((int *)matrix, m, n);
    return 0;
}