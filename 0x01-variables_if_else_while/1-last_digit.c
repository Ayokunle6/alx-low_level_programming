#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point (Assigning random numbers to n)
 * Return: (0)
 */
int main(void)
{
int n;
int Last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* The code goes here */
Last_digit = n % 10;
if (Last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
}
else if (Last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, Last_digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);
}
return (0);
}
