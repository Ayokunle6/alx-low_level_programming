#include <stdio.h>
#include "main.h"

/**
* main - prints the sum of the even-valued terms
*
* Return: 0
*/

int main(void)
{
unsigned int fib1, fib2, sum, a, b;
fib1 = 1;
fib2 = 2;
sum = 3;
b = 2;
for (a = 2; a <= 32; a++)
{
if (sum % 2 == 0)
b = b + sum;
fib1 = fib2;
fib2 = sum;
sum = fib1 + fib2;
}
printf("%u\n", b);
return (0);
}
