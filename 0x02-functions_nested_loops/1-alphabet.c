#include "main.h"

/**
* main - Entry point(A function that prints the alphabet, in lowercase)
*
* Return: 0
*/

void print_alphabet(void)
{
char a_z;

for (a_z = 'a'; a_z <= 'z'; a_z++)
_putchar(a_z);

_putchar('\n');
}
