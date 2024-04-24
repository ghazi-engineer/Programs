// #include<stdio.h>
// #define size 5 
// int main()
// {
// int i;
// int rollno[size];
// int elder=0;
// printf("Finding the person who's elder than everyone\n\n");
// for ( i = 0; i < size; i++)
// {
//     printf("Age of Roll no %d : ", i+1);
//     scanf("%d", &rollno[i]);
//     printf("\n");
// }
// for ( i = 0; i < size; i++)
// {
//     if (rollno[i]>elder)
//     elder = rollno[i];    
// }
// printf("Roll no %d is bigger %d : ",i, elder);
// return 0;
// }

#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROWS][COLS];

    addMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("Matrix 2:\n");
    displayMatrix(matrix2);

    printf("Sum of the matrices:\n");
    displayMatrix(result);

    return 0;
}