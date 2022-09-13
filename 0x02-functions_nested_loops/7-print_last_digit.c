#include "main.h"

/**
 * int print_last_digit -function that prints the last digit of a number.
 * @a: The input number to print the last digit
 * Return: int.
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n *= -1;

	_putchar(n + '0');
	return (n);
}
