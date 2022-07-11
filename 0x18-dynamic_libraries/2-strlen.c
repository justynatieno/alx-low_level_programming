#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: the characters
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
		length++;

	return (length);
}
