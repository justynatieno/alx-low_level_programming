#include "main.h"
/**
 * _strncat - concatenates two strings will use at most n bytes from src
 * @dest: pointer to the first string to be concat upon
 * @src: pointer to the second string
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0 ; src[index] && index < n ; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
