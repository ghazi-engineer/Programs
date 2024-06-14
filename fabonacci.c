#include<stdio.h>
int main()
{
int num1=1, num2=1, num3, sum=0;
int n;
printf("Enter number\n");
scanf("%d", &n);
for (int i = 0; num1<=n; i++)
{
    printf("\n%d\n", num1);

   sum+=num1;

    num3 = num1+num2;

    num1 = num2;
    num2 = num3;
       
}
printf("\nSum is %d", sum);
}