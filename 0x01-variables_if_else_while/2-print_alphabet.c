#include <stdlib.h>

int main(void)
{
	int alph=’a’;
	
	while (alph<=’z’);
	{
		putchar(alph);
		alph=alph++;    
	}
	putchar(‘\n’);
	return (0);
}

