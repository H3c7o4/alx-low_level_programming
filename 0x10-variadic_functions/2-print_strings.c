#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	int i;

	va_start(op, n);
	if(n != 0)
	{
		if (va_arg(op, char*) != NULL)
		{
			for (i = 0; i < n; i++)
				printf("%s%s", va_arg(op, char*), *separator);
		}
		else
		{
			printf("(nil)");
		}
		_putchar('\n');
}
