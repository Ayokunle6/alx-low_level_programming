#include <stdio.h>
#include "main.h"

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2)
*
* Return: 0
*/

int main(void)
{
long int fib1, fib2, sum, a;
fib1 = 1;
fib2 = 2;
sum = 3;

printf("%ld, ", fib1);
printf("%ld, ", fib2);
for (a = 3; a < 50; a++)
{
printf("%ld, ", sum);
fib1 = fib2;
fib2 = sum;
sum = fib1 + fib2;
}
printf("%ld\n", sum);
return (0);
}
