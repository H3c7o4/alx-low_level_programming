#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int alph = 'a';
	
	while (alph <= 'z')
	{
		putchar(alph);
		alph = alph+1;    
	}
	putchar('\n');
	return (0);
}

