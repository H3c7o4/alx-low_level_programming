#include <stdlib.h>

int main(void)
{
	int alph=’a’;

	for (alph=’a’; alph<=’z’ && alph!=’e’ && alph!=’q’; alph++)
	{
         	putchar(alph);
	}
	putchar(‘\n’);
	return (0);
}

