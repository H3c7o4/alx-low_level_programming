#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int alph = 'z';
	
	while (alph >= 'a')
	{
		putchar(alph);
		alph = alph-1;    
	}
	putchar('\n');
	return (0);
}
