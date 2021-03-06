#include <stdio.h>

/**
* main - print the first 98 Fibonacci numbers, starting with 1 and 2
*
* Return: 0
*/

int main(void)
{
unsigned long int a, a1, a2, b, b1, b2, sum, c1, c2, d, e;
a = 1;
b = 2;
sum = a + b;

printf("%lu, ", a);
printf("%lu, ", b);
for (d = 3; d < 89; d++)
{
printf("%lu, ", sum);
a = b;
b = sum;
sum = a + b;
}
b1 = b / 1000000000;
b2 = b % 1000000000;
c1 = sum / 1000000000;
c2 = sum % 1000000000;
for (e = 89; e < 98; e++)
{
printf("%lu%lu, ", c1, c2);
a1 = b1;
a2 = b2;
b1 = c1;
b2 = c2;
c1 = a1 + b1 + ((a2 + b2) / 1000000000);
c2 = (a2 + b2) % 1000000000;
}
printf("%lu%lu\n", c1, c2);
return (0);
}
