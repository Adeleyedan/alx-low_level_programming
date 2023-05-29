#include <stdio.h>

/**
 * main - Print all letters in lowercase in reverse
 *
 * Return: 0 (Always)
 */
int main(void)
{
	char letters;

	for (letters = "z"; letters = "a"; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
