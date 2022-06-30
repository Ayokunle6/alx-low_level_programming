#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* *create_array - creates an array of chars, and initializes it with a char.
* @size: array size
* @c: initialized char
*
* Return: 0
*/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int x;

if (size == 0)
return (NULL);
str = malloc(sizeof(char) * size);
if (str == NULL)
return (NULL);
x = 0;
while (x < size)
{
str[x] = c;
x++;
}
return (str);
}
