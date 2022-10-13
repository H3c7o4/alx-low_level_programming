#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: single character to seperate to int
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int deb;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			deb = va_arg(op, int);
			printf("%d", deb);
		}
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		deb = va_arg(op, int);
		printf("%d%s", deb, *seperator);
	}
	_putchar('\n');
	va_end(ap);
}
