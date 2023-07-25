#include <stdio.h>

void matrixSum(int A[3][3], int B[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void displayMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[3][3] =
    {
        {3, 2, 4},
        {2, 6, 3},
        {5, 8, 7}
    };

    int B[3][3] =
    {
        {1, 4, 6},
        {4, 3, 2},
        {5, 7, 8}
    };

    int result[3][3];

    // Calculate the sum of matrices A and B
    matrixSum(A, B, result);

    // Display the matrices and their sum
    printf("Matrix A:\n");
    displayMatrix(A);

    printf("\nMatrix B:\n");
    displayMatrix(B);

    printf("\nMatrix Sum (A + B):\n");
    displayMatrix(result);

}
