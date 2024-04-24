#include <stdio.h>

 int main() {

// input user is 153 so it is a armstrong number (1^3 + 5^3 + 3^3) = 153

int n, arm = 0, r; 
// variable declare.. arm = 0 because add of arm value with o so the answer is equal to arm value

printf("\nEnter any number");
scanf("%d", &n);

int c = n;
// number of n values assign in c and store data of n in c...
while (n>0)
{
    r = n % 10; // reminder n value divide by 10 and the produce reminder multiple three times
    arm = (r*r*r) + arm;
    n = n / 10;  // when will loop continue when the number of n less than and equal to zero
    // n value is store again and again when will the n value equal to zero
}
if (c == arm)  // if c is equal to arm then you can print it that it is armstrong number...
{
    printf("Armstrong number");
}
else
printf("Not");

return 0;

}
