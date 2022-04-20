#include "main.h"
/**
 * _strlen -returns length of a string
 * @s: the characters
 *
 * Return: the legnth of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
		length++;

	return (length);
}
