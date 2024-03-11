#include<stdio.h>
int main()
{

// ODD NUMBER //

// int num=10;
//     int sum=0;
//     for(int i=1; i<=num; i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//             sum += i;
//         }
//     }
//     printf("%d",sum);


int odd_number=15;
int sum =0;
for (int i = 1; i <=odd_number ; i++)
{
    if (i%2!=0)
    {
        printf("%d\n",i);
        sum +=i;
    }
}
printf("sum of odd number is %d\n",sum);

}