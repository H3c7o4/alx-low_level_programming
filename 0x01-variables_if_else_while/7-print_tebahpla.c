#include <stdlib.h>

int main(void)
{
	int alph=’z’;
	
	while (alph>=’a’)
	{
		putchar(alph);
		alph=alph–;    
	}
	putchar(‘\n’);
	return (0);
}
