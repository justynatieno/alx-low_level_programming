#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 *
 * Return: No return
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i ; j >= 0 ; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}
