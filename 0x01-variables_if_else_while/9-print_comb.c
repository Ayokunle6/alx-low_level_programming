#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point (prints all single digits possible combinations)
* Description: The program that prints all possible combinations
* return: 0
*/

int main(void)
{

int n;

for (n = 0; n < 10; n++)

{

putchar (n + '0');
if (n < 9)

{
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);

}
