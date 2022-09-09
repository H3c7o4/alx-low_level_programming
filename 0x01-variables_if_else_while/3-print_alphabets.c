#include <stdlib.h>

int main(void)
{
	int alph=’a’;
        int ALPH=’A’;

	while (alph<=’z’)
	{
		putchar(alph);
		alph=alph++;    
	}
	while (ALPH<=’Z’)
	{
		putchar(ALPH);
		alph=alph++;
	}
	putchar(‘\n’);
	return (0);
}

