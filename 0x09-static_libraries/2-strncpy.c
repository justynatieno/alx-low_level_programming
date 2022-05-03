#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to store the string copy
 * @src: the source string
 * @n: the maximum number of bytes to be copied from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
© 2022 GitHub, Inc.
