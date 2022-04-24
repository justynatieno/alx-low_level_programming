#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: the string to be changed
 *
 * Return: A pointer to the changed string
 */
char *string_toupper(char *c)
{
	int index = 0;

	while (c[index])
	{
		if (c[index] >= 'a' && c[index] <= 'z')
			c[index] -= 32;

		index++;
	}
	return (c);
}
