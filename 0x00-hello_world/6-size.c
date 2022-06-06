#include <stdio.h>
/**
 * main - entry point (print the size of data types)
  * Description:printing out the size of all data type
  *Return: (0)
  */
int main(void)
{
char c;
int i;
int long a;
int long long b;
printf("Size of a char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(i));
printf("Size of a long int: %zu byte(s)\n", sizeof(a));
printf("Size of a long long int: %zu byte(s)\n", sizeof(b));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
