#include "main.h"

/**
* jack_bauer - A function that prints every minute of the day 
* Return: void
*/

void jack_bauer(void)
{
int hrs, mins;
for (hrs = 00; hrs <= 23; hrs++)
{
for (mins = 00; mins <= 59; mins++)
{
_putchar((hrs / 10) + '0');
_putchar((hrs % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
}
}
}
