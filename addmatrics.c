#include<stdio.h>
#define rows 10
#define col 10
int main()
{

int a[rows][col] = {{1,3,5,7,5},{2,4,6,8,5},{1,2,3,4,5},{3,5,7,4,5},{4,5,2,6,1},{2,4,3,6,7},{1,3,3,9,6},{0,2,1,5,5},{4,6,1,5,4},{3,4,1,8,9}};
int b[rows][col] = {{2,4,3,6,7},{1,3,3,9,6},{0,2,1,5,5},{4,6,1,5,4},{3,4,1,8,9},{2,4,3,6,7},{1,3,7,9,6},{0,2,1,5,5},{4,6,1,5,4},{3,4,1,8,9}};

int sum[rows][col];
int product[rows][col];
int x[rows][col];
int i, j;

printf("first matrix: \n");
for (i = 0; i < rows; i++)
{
    for ( j = 0; j < col; j++)
    {
        printf("%d\t", a[i][j]);
    }
    printf("\n");
}

printf("second matrix: \n");
for (i = 0; i < rows; i++)
{
    for ( j = 0; j < col; j++)
    {
        printf("%d\t", b[i][j]);
    }
    printf("\n");
}

printf("Sum of two matrix: \n");
for (i = 0; i < rows; i++)
{
    for ( j = 0; j < col; j++)
    {
        sum[i][j] = a[i][j] + b[i][j];
        printf("%d\t", sum[i][j]);
    }
    printf("\n");
}

printf("Product of two matrix\n");
for ( i = 0; i < rows; i++)
{
    for ( j = 0; j < col; j++)
    {
        product[i][j] = a[i][j] * b[i][j];
        printf("%d\t", product[i][j]);
    }
    printf("\n");
}

printf("Add of sum and prduct matrix\n");
for ( i = 0; i < rows; i++)
{
    for ( j = 0; j < col; j++)
    {
        x[i][j] = sum[i][j] + product[i][j];
        printf("%d\t", x[i][j]);
    }
    printf("\n");
}

return 0;

}