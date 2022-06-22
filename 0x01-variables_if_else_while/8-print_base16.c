#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point (A program that prints all numbers in base 16)
*
* Return: 0
*/

int main(void)
{
int n;
char alpha_lower;

for (n = 0; n < 10; n++)
printf("%d", n);
for (alpha_lower = 'a'; alpha_lower <= 'f' ; alpha_lower++)
putchar(alpha_lower);
printf("\n");
return (0);
}
