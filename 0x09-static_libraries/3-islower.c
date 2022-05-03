#include "main.h"
/**
 * _islower - checks if a letter is in lower case
 * @c: the character to be checked
 *
 * Return: 1 if is lower and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
