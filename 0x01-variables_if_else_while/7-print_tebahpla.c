#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point ( prints the lowercase alphabet in reverse)
*
* Return: 0
*/

int main(void)
{
char s;

for (s = 'z'; s >= 'a'; s--)
putchar(s);
putchar('\n');
return (0);
}
