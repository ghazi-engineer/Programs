#include<stdio.h>

typedef struct student
{
    int id_no;
    char name[15];
    int age;
    
} candidate;
int main()
{
    candidate s1;
printf("Enter id_no\n");
scanf("%d", &s1.id_no);
printf("Enter name\n");
scanf("%s", &s1.name);
printf("Enter age\n");
scanf("%d", &s1.age);


}