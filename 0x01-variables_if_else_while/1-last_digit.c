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
int num;

srand(time(0));  
n = rand() - RAND_MAX / 2;
/* The code goes here */
num = n % 9;
if(num > 5)
printf("last digit of %d is %d and is greater than 5\n", n, num);
else if(num == 0)
printf("last digit of %d is %d and is 0\n", n, num);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
return (0);
}
