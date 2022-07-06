#include "main.h"

/**
 * factorial - To find the factorial of n
 * @n: integer parameter
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
