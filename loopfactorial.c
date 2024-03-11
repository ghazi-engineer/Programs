#include<stdio.h>
  
int main()
{
    //   int num;
    // printf("Enter a num for factorial");
    // scanf("%d", &num);
    // int fact=1;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact *= i;
        
    // }
    // printf("%d\n",fact);
    
    int num;

    printf("\nEnter any factorial");
    scanf("%d",&num);

    int fact=1;

    for ( int i = 1; i <=num; i++)
    {
         fact *= i;
    }
    printf("%d\n",fact);
    
}