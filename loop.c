#include<stdio.h>
int main()
{
    //SUM OF EVEN NUMBER..........
    int num=15;
    int sum = 0;
    for (int i = 1; i <=num; i++)
    {
        if (i % 2 == 0 )
        {
            printf("\nEven number is %d",i);
            sum += i;
        }
    }
    printf("\nSum of Even number is %d",sum);
    
}


