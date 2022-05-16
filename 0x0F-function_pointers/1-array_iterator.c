#include "function_pointers_h"
/**
 * array_iterator - executes function givn as parameter
 * on each element of an array
 * @size: size of an array
 * @action: pointer to function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size -- > 0)
	{
		action(*array);
		array++;
	}
}
