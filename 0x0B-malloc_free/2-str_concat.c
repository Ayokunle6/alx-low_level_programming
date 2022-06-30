#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenate two string
* @s1: string 1
* @s2: string 2
* Description: return the required result
* Return: char pointer
*/

char *str_concat(char *s1, char *s2)
{
unsigned int i, len1 = 0, len2 = 0;
char *ptr;

if (!s1)
s1 = "";
else
for (; s1[len1]; len1++)
;
if (!s2)
s2 = "";
else
for (; s2[len2]; len2++)
;
len2++;
ptr = malloc((len1 + len2) *sizeof(char));

if (!ptr)
return (NULL);

for (i = 0; i <= (len1 + len2); i++)

{
if (i < len1)
ptr[i] = s1[i];
else
ptr[i] = s2[i - len1];
}
return (ptr);

}
