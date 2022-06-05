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
float f;
printf("char size: %zu byte(s)\n", sizeof(c));
printf("int size: %zu byte(s)\n", sizeof(i));
printf("int long size: %zu byte(s)\n", sizeof(a));
printf("int long long size: %zu byte(s)\n", sizeof(b));
 printf("float size: %zu byte(s)\n", sizeof(f));
return (0);
}
