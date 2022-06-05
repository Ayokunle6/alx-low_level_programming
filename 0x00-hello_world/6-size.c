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
printf("size of a char: %zu byte(s)\n", sizeof(c));
printf("size of an int: %zu byte(s)\n", sizeof(i));
printf("size of a long int: %zu byte(s)\n", sizeof(a));
printf("size of a long long int: %zu byte(s)\n", sizeof(b));
printf("size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
