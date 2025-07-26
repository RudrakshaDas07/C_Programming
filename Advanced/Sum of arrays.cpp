#include<stdio.h>
int main() {
	int A[50][50],B[50][50],C[100][100],row,col,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    
	printf("Enter elements of first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the result matrix with zeros
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix addition
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
          C[i][j] += A[i][j] * B[i][j];
        }
    }

    printf("\nResultant matrix (A + B):\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
