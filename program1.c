#include<stdio.h>
int main(void)
{
    // int a = 25;
    // int b = 2;

    // float c = 25.0;
    // float d = 2.0;

    // printf("6 + a / 5 * b = %d\n",6 + a / 5 * b);
    // printf("a / b * b = %d\n",a / b * b);
    // printf("c / d * d = %d\n", c / d * d);
    // return 0;


// Table of Every real number.......

    int num;
    printf("\nEnter a number");
    scanf("%d", &num);
    for (int i = 1; i<=30; i++)
    {
        printf("\n%d * %d = %d",num,i,num*i);
    }
}