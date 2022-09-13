#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - Function that prints number from n to 98
 * @n: input number from where to start
 * Result: Nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else 
		printf("%d, ", n);
}
