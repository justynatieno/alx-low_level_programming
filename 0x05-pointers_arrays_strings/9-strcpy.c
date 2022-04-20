#include "main.h"
/**
 * _strcpy - copies a string pointed to by @src
 * @dest: a buffer to copy the string to
 * @src: the source string to copy
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
