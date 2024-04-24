#include<stdio.h>

void add(void)
{
    int num1, num2;
    printf("Enter first Integer");
    scanf("%d", &num1);
    printf("Enter second Integer");
    scanf("%d", &num2);
    int result = num1 + num2;
    printf("Sum of two integers: %d", result);
}

void minus(void)
{
    int num1, num2;
    printf("Enter first Integer");
    scanf("%d", &num1);
    printf("Enter second Integer");
    scanf("%d", &num2);
    int result = num1 - num2;
    printf("Minus of two integers: %d", result);
}

void product(void)
{
    int num1, num2;
    printf("Enter first Integer");
    scanf("%d", &num1);
    printf("Enter second Integer");
    scanf("%d", &num2);
    int result = num1 * num2;
    printf("Product of two integers: %d", result);
}

void divide(void)
{
    float num1, num2;
    printf("Enter first Integer");
    scanf("%f", &num1);
    printf("Enter second Integer");
    scanf("%f", &num2);
    float result = num1 / num2;
    printf("Division of two integers: %.2f", result);
}


int main()
{
    add();
    printf("\n");
    minus();
    printf("\n");
    product();
    printf("\n");
    divide();
return 0;
}