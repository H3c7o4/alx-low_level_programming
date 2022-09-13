#include "main.h"

/**
 * print_to_98 - Function that prints number from n to 98
 * @n: input number from where to start
 * Result: Nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar('n');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar('n');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else 
		_putchar('n');
}
