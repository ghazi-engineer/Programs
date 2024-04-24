// #include<stdio.h>
// int main()
// {                    // Swap two Integers without using functions
//     int x, y, z;
//     printf("value of x");
//     scanf("%d", &x);
//         printf("value of y");
//     scanf("%d", &y);

//     z = x;
//     x = y;
//     y = z;

//     printf("value of x: %d\n",x);
//     printf("value of y: %d",y);

// }

#include<stdio.h>
void swap(void)                           //Swap two integers using functions
{                                      
    int x,y,z;
    printf("Enter value of X & Y");
    scanf("%d\n%d", &x, &y);
    z = x;                            // value of x store in z
    x = y;                           // value of y store in x
    y = z;                          // value of x store in y
    printf("After swaping %d\n", x);
    printf("After swaping %d\n", y);

}
int main()
{
    swap();
    swap();
    return 0;
}