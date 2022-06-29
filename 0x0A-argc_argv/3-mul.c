#include <stdio.h>
#include <stdlib.h>
/**
* main - print the result of the multiplication
* @argc: count argument
* @argv: argument vector
*
* Return: multiplication result
*/

int main(int argc, char *argv[])
{

int product;

if (argc != 3)
printf("Error\n");

else
{
product = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", product);
}
return (0);
}
