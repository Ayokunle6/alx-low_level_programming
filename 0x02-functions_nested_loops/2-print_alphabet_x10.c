#include "main.h"

/**
* print_alphabet_x10 -  prints 10 times the alphabet
*
* Return: 0
*/

void print_alphabet_x10(void)
{
int num = 0;
char alpha;

while (num++ <= 9)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);

_putchar('\n');
}

}
