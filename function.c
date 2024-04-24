#include<stdio.h>
void square(void)
{
int num;                  // Square of integers....
printf("Enter integer");
scanf("%d", &num);
int result = num*num;     // square numbers assign
printf("Sqauare of integer: %d", result);
}
void qube(void)
{
int num;                  // Qube of integers.....
printf("Enter integer");
scanf("%d", &num);
int result = num*num*num;   // value assign
printf("Qube of integer: %d", result);
}

int main()
{
    square();          //call the function 
    printf("\n");
    qube();             // call the function...  
    return 0;
}

// Second Mehtod...

#include<stdio.h>
int sqr(int no)
{
    int result;
    result = no*no;
    return (result);
}
int qb(int no)
{
    int result;
    result = no*no*no;
    return (result);
}
int main()
{
    int n, s, q;
    printf("Enter integer");
    scanf("%d", &n);
    s = sqr(n);
    printf("\nsquare of integer: %d", s);
    printf("\n");
    q = qb(n);
    printf("qube of integer: %d", q);
}