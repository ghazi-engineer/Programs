// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     FILE* fptr;
//     fptr = fopen("filename.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("the file is not opened. the program will", "now exit");
//     }
//     return 0;
// }

// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include<conio.h>

struct employee{

    int id_no;
    char name[20];
    char designation[20];
    int salary;
};
main()
{
    struct employee (emp1);
    
    printf("\nEnter id_no : ");
    scanf("%d", &emp1.id_no);
    printf("\nEnter name : ");
    scanf("%s", &emp1.name);
    printf("\nEnter designation : ");
    scanf("%s", &emp1.designation);
    printf("\nEnter salary : ");
    scanf("%d", &emp1.salary);
    
    printf("\nDetails of Employee\n");
    
    printf("\nId_no : %d", emp1.id_no);
    
    printf("\nEmployee Name : %d", emp1.name);
    
    printf("\nDesignation : %d", emp1.designation);
    
    printf("\nSalary : %d", emp1.salary);
    
}
// int main()
// {
//     int i,j;
// for ( i = 0; i < 100; i++)
// {
//     for ( j = 0; j < i; j++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
// return 0;
// }

// int main()
// {
//     float farenheit, celcius;
//     printf("Enter temperature in ferenheit\n");
//     scanf("%f", &farenheit);
//     celcius = (farenheit-32)*9/5;
//     printf("Temperature in celcius\n", celcius);
//     return 0;
// }
