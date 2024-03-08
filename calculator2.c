 #include <stdio.h>

 int main() {
     float num1, num2;
     char operation;

     printf("Enter the first number: ");
     scanf("%f", &num1);

     printf("Enter the second number: ");
     scanf("%f", &num2);

     printf("Enter an operation (+, -, *, /): ");
     scanf(" %c", &operation);

     switch(operation) {
         case '+':
             printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
             break;
         case '-':
             printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
             break;
        case '*':
             printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
             break;
        case '/':
            if(num2 != 0)
                 printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
             else
                printf("Error! Division by zero.");
             break;        
         default:
             printf("Error! Invalid operation.");
     }
     return 0;
 }



