#include <stdlib.h>

int main(void)
{
	int alph=’z’;
        int n=0;

	for (n=0; n<10; n++)
        {
		putchar(n);
	}
	while (alph<=’g’)
	{
        	putchar(alph);
		alph=alph–;    
 	}
	putchar(‘\n’);
	return (0);
}
