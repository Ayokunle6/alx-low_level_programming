#include <stdio.h>

/**
* main - Entry point(prints all possible combinations of three digits)
*
* Return: 0
*/

int main(void)
{
int numb1, numb2, numb3;

for (numb1 = '0'; numb1 <= '7'; numb1++)
{
for (numb2 = numb1 + 1; numb2 <= '8'; numb2++)
{
for (numb3 = numb2 + 1; numb3 <= '9'; numb3++)
{
putchar(numb1);
putchar(numb2);
putchar(numb3);
if (numb1 == '7' && numb2 == '8' && numb3 == '9')
break;
putchar(',');
putchar(' ');
}

}

}

putchar('\n');
return (0);
}
