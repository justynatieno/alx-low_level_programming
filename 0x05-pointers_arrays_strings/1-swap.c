#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: pointer first value
 * @b: pointer second value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
