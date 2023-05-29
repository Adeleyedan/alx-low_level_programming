#include <stdio.h>

/**
 * main - Print all letters except q and e
 *
 * Return: 0 (Always)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letters);
		}
	}
	putchar('\n');
	return (0);
}
