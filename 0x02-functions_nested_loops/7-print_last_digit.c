#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number.
* @n: integer modified
* Return: 0
*/

int print_last_digit(int n)
{
int l, d;

l = n % 10;
if (l < 0)
l = -1;
d = '0' + 1;
_putchar(d);
return (0);
}
