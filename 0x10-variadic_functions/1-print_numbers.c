#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: single character to seperate to int
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(op, int));
		_putchar('\n');
	}
	for (i = 0; i <= n; i++)
	{
		printf("%d%s", va_arg(op, int), *seperator);
	}
	_putchar('\n');
	va_end(ap);
}
