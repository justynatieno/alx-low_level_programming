#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: first array of ints
 * @n: second array of ints
 */
void print_array(int *a, int *b)
{
	int index;

	for (index = 0 ; index < n ; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;

		printf(" ");

	}
	printf("\n");
}
