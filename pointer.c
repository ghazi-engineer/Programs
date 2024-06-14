// #include<stdio.h>
// int main()
// {
//     int var = 5;
//     printf("var%d\n", var);

//     printf("address of var: %p", &var);
//     return 0;


//     int* pc, var;
//     var = 5;
//     pc = &var;
//     printf("value of var using pointer is %d", *pc);
//     printf("value of var: %d\n", var);

//     printf("address of var: %p", &var);
// }

#include<stdio.h>
void swap(int*x , int*y)

{
    int z;
    printf("\nEnter number for swapping ");
    scanf("%d", &x);

    printf("\nEnter second number for swapping");
    scanf("%d", &y);
       printf("\n Before swapping two numbers %d and %d",x,y);

    z = *x;

    *x = *y;

    *y = z;
    printf("\nAfter swapping two numbers %d and %d",x,y);

}

main()
{
    int a,b;
    
    // printf("\nAfter swapping two numbers %d and %d",a,b);
    swap(a,b);
    return 0;
}