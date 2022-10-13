#include <stdio.h>
#include <stdlib.h>

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
	va_start(op, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(op, int);
	va_end(op);
	return (sum);
}
