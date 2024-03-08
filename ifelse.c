#include<stdio.h>

main()
{
    float num1, num2, result;
    char operation;
    
    printf("operation(+,-,*,/)");
    scanf("%c", &operation);

    printf("Enter two numbers ");
    scanf("%f %f", &num1, &num2);

    if (operation == '+')
    {
        result = num1 + num2;
    }
    else if (operation == '-')
    {
        result = num1 - num2;
    }
    else if (operation == '*')
    {
        result = num1 * num2;
    }
    else if (operation == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else 
        {
            printf("Error division by zero is not allowed. \n");
            return 1;
        }
    } 
        else
        {
            printf("Error! Invalid operator.\n");
            return 1; // Exiting with error code 1
        }
        printf("result: %.2f", result);
        return 0;
        
        
 }

