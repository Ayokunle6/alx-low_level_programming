#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string
* @str: string to copy
* Return: returns a pointer to the copy, or NULL if it fails
*/

char *_strdup(char *str)
{
char *ptr;
unsigned int i, len;

if (!str)
return (NULL);
for (len = 0; str[len]; len++)
;
len++;
ptr = malloc(len *sizeof(char));

if (!ptr)
return (NULL);

for (i = 0; i <= len; i++)
ptr[i] = str[i];

return (ptr);

}
