#include<stdio.h>

int main(void)
{
    // Three variables.......
    int x;
    int y;
    int z;

printf("Enter the marks of Math      =\t");
scanf("%d", &x);

printf("Enter the marks of Physics   =\t");
scanf("%d", &y);

printf("Enter the marks of Chemistry =\t");
scanf("%d", &z);

int obt = x + y + z;

printf("\nTotal marks of subjects= 300");
printf("\nobtained marks     \t= %d", obt);

// percentages.....

float total = 300;
float per = obt / total * 100;

printf("\nPercentage \t\t= %.2f",per);

// Grades Gpa.....

if (per<=100 && per>=80)
{
    printf("\nGrade\t\t\t= A+");
    printf("\nGPA\t\t\t= 3.5");

}

if (per<=80 && per>=70)
{
    printf("\nGrade\t\t\t= A");
    printf("\nGPA\t\t\t= 3.2");

}

if (per<=70 && per>=60)
{
    printf("\nGrade\t\t\t= B");
    printf("\nGPA\t\t\t= 2.6");

}


if (per<=60 && per>=50)
{
    printf("\nGrade\t\t\t= C");
    printf("\nGPA\t\t\t= 2.0");

}


if (per<=50 && per>=40)
{
    printf("\nGrade\t\t\t= D");
    printf("\nGPA\t\t\t= 1.4");

}



return 0;

}