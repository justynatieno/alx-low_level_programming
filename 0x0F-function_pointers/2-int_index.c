#include "function_pointers.h"
/**
 * int_index - searche for an integer in an array of ints
 * @array: array of ints
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no element matches -1 otherwise first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0 ; index < size ; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
