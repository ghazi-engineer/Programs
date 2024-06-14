#include<stdio.h>
int main()
{
// int ghazi1 = 430;
// int *p = &ghazi1; 


// printf("\n%p", p);

// printf("\n%d", *p);


// int *a[4]={21,13,55,16};
// for (int i = 0; i<4; i++)
// {
//     printf("\n%p",&a[i]);
// }

// printf("\n%d",a[2]);
// printf("\n%p and %d",&a[3],a[3]);
// printf("\n%d",a[1]);


int mynumber[4] ={20,12,3,42};   // Get the value of the second element in myNumbers
printf("%d\n",*(mynumber+2)); 
printf("--------");



int age[4] = {32,17,45,23};
int *ptr = age;
for (int i = 0; i < 4; i++)
{
    printf("\n%d",*(age+i));
    
}

printf("\n");
int mynumbers[5] = {2,4,1,6,7};
// change the value of first element.. 
*mynumbers = 13;
// change the value of second element..
*(mynumbers + 1) = 17;
printf("--------");
printf("\n%d", *mynumbers);

printf("\n%d", *(mynumbers + 1));
}