#include <stdio.h>

/**
 * main - Print all numbers from 0-9
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar('0' + numbers);
	}

	putchar('\n');
	return (0);

}
