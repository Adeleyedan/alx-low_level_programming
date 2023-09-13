#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 * @swap: stands as the variabl
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
