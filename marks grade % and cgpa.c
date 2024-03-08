#include<stdio.h>
#include<time.h>
#include<math.h>

int main(void)
{
    float math;
    float physics;
    float English;
    float Chemistry;
    float Urdu;
    float Islamiat;

printf("Enter marks \n");
scanf("%f", &math);

printf("Enter marks \n");
scanf("%f", &physics);

printf("Enter marks \n");
scanf("%f", &English);

printf("Enter marks \n");
scanf("%f", &Chemistry);

printf("Enter marks \n");
scanf("%f", &Urdu);

printf("Enter marks \n");
scanf("%f", &Islamiat);

//marks....

float obt= math + physics + English + Chemistry + Urdu + Islamiat;

printf("\n Total marks \t= 600");

printf("\n Obtained marks = %f", obt);

//Percentage.... 
float total = 600;

float Per = obt / total * 100;

printf("\n Percentage \t= %.2f", Per);

// Grade....

if (Per>=80)
{
  printf("\n Grade \t \t= A+");
}

else if(Per<=80 && Per>70)
{
  printf("\n Grade \t \t= A");
}

else if(Per<=70 && Per>60)
{
  printf("\n Grade \t \t= B");
}

else if(Per<=60 && Per>50)
{
  printf("\n Grade \t \t= C");
}

else if(Per<=50 && Per>40)
{
  printf("\nGrade \t \t= D");
}

//GPA.....


}
