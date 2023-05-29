#include <stdio.h>

/**
 * main - Print all single numbers line by line
 *
 * Retun: 0 (Always)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
