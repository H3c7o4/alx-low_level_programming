#include "main.h"

/**
 * void print_alphabet_x10 - 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i = 0;
        int alph;

	While (i < 10)
	{
		alph = 'a';

		while (alph ≤ 'z')
		{
			_putchar(alph);
			alph++;
		}
		i++;
	}
	_putchar(10);
	return (0);
}
