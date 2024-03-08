// #include <stdio.h>

// int main() {
//     float num1, num2;
//     char operation;

//     printf("Enter the first number: ");
//     scanf("%f", &num1);

//     printf("Enter the second number: ");
//     scanf("%f", &num2);

//     printf("Enter an operation (+, -, *, /): ");
//     scanf(" %c", &operation);

//     switch(operation) {
//         case '+':
//             printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
//             break;
//         case '-':
//             printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
//             break;
//         case '*':
//             printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
//             break;
//         case '/':
//             if(num2 != 0)
//                 printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
//             else
//                 printf("Error! Division by zero.");
//             break;
//         default:
//             printf("Error! Invalid operation.");
//     }

//     return 0;
// }


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

float sum = math + physics + English + Chemistry + Urdu + Islamiat;

printf(" \nTotal marks is = \t 600");

printf("\n Obtained marks is \t %f", sum);
 return 0;

if
}
