#include<stdio.h>
int main()
//Area of cirlce formula: pi*radius*radius
{
    float radius;
    float pi = 3.14;

    printf("\nEnter a radius of circle:\t");
    scanf("%f", &radius);

    printf("\nArea of circle is %f\t", pi*radius*radius);
    return 0;
    
}