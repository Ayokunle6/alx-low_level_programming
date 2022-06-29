#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: the size of argv array, the num of command line argument
* @argv: an array containing the program command line argument
*
* Return: 0
*/

int main(int argc, char **argv)
{
int num1, num2, result = 0;
for (num1 = 1; num1 < argc; num1 += 1)
{
for (num2 = 0; (argv[num1])[num2] != '\0'; num2 += 1)
{
if (((argv[num1])[num2] - '0') >= 0 && ((argv[num1])[num2] - '0') <= 9)
continue;
else
{
printf("Error\n");
return (1);
}
}

result += atoi(argv[num1]);
}

printf("%d\n", result);
return (0);
}
