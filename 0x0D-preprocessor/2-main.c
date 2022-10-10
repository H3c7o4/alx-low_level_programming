#include <stdio.h>

/**
 * main - Function that prints the name of the file
 *  it was compiled from, followed by a new line.
 *  Returns: 0 or 1
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
