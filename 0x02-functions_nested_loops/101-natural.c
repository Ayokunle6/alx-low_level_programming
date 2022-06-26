#include "main.h"
#include <stdio.h>

/**
* main - Entry(prints the sum of all the multiples of 3 or 5 below 1024)
*
* Return: 0
*/

int main(void)
{
int m;
int add = 0;

for (m = 0; m <= 1024; m++)
{
if ((m % 3) == 0 || (m % 5) == 0)
add += m;
}
printf("%d\n", add);
return (0);
}
