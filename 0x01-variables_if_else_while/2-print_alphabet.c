#include <stdio.h>

/**
* main - function(To print the alphabet in lowercase)
* Description: This program prints in lowercase with a new line after it.
* Return: 0
*/

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
