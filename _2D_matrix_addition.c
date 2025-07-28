#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;
    

    // Input the size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements of first matrix
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the result
    printf("\nSum of Matrix A and B is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
