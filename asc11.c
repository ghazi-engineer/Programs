#include<stdio.h>

//ASCII CHARACTERS

int main()
{
int num;

printf("Enter a number between 0 and 255");
scanf("%d", &num);

switch (num)
{
case 0 ... 255:
    printf("The ASCll character for %d is: %c\n", num,(char)num);
    break;

default:
printf("Invalid input! Please enter a number between 65 and 100.\n");
return 1;
}
return 0;


}
