#include "main.h"

/**
 * print_alphabet - Print all letters in lowercase
 *
 * Return: 0 (Always)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
