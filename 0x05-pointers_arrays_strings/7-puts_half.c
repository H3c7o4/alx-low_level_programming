#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: pointer to char
 * Return: nothing.
 */

void puts_half(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	n = i;
	if (n % 2 == 0)
	{
		for (i = (n / 2) - 1; i < n; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((n - 1) / 2) - 1; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
