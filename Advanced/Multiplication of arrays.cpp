#include<stdio.h>
int main() {
	int A[50][50],B[50][50],C[200][200],r1,r2,c1,c2,i,j,k;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: Matrices cannot be multiplied.\nNumber of columns in first matrix must equal number of rows in second matrix. \n");
        return 1;
    }

    printf("Enter elements of first matrix:\n")
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the result matrix with zeros
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) { // Or k < r2, as c1 == r2
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant matrix (A * B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
