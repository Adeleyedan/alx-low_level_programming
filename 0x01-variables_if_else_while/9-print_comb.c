#include <stdio.h>

/**
 * main - Print all single numbers from 0 - 9 with commas and spaces
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
