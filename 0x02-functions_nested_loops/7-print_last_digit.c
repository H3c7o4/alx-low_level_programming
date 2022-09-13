#include "main.h"

/**
 * int print_last_digit -function t prints the last digit of a number.
 * @a: The input number to print the last digit
 * Return: int.
 */

int print_last_digit(int n)
{
	x %= 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
