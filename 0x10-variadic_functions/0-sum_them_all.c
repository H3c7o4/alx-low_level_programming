#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: input integer
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	int i, sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(op, n);
	for (i = 0; i < n; i++)
		sum += va_arg(op, int);
	va_end(op);
	return (sum);
}
