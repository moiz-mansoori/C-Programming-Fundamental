//Write a C program named MatrixTranspose.c that takes user input for a 4x4 matrix,
// then transposes the matrix and prints both the original and transposed matrices. 
//The program should have a function transposeMatrix that performs the matrix transposition

#include <stdio.h>

void transposeMatrix(int matrix[4][4], int transposed[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }
}

int main() {
    int matrix[4][4], transposed[4][4];

    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, transposed);

    printf("Original Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}

