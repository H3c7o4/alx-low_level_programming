#include "main.h"

/**
 * main - The program prints _putchar
 *
 * main : The main code prints _putchar
 *
 * return - 0 if success
 */

int main(void)
{
	int i = 0;
	char strng_ptchr[8] = "_putchar";

	while (i < 8)
	{
		_putchar(strng_ptchr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
