#include "main.h"
#include <unistd.h>

/**
* main - Entry point(making _putchar a function)
*
* Return: 0
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
