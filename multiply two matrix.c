#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;
    printf("Enter the dimensions of matrix 1 (m x n): ");
    scanf("%d %d", &m1, &n1);
    printf("Enter the dimensions of matrix 2 (m x n): ");
    scanf("%d %d", &m2, &n2);
//    if (n1 != m2) {
//        printf("Error: The number of columns of matrix 1 must be equal to the number of rows of matrix 2\n");
//        return 0;
//    }
    int mat1[m1][n1], mat2[m2][n2], result[m1][n2];
    printf("Enter the elements of matrix 1: ");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of matrix 2: ");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (k = 0; k < n1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("The product of the two matrices is:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

