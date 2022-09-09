#include <stdlib.h>
#include <stdio.h>

/**This program prints all the numbers of base 16 in lowercase, followed by a new line.
 */

int main(void)
{
	int alph = 'a';
        int n = 0;

	for (n = 0; n < 10; n++)
        {
		putchar(n);
	}
	while (alph <= 'f')
	{
        	putchar(alph);
		alph = alph-1;    
 	}
	putchar('\n');
	return (0);
}
