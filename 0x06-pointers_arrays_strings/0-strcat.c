#include "main.h"
/**
 * _strcat - concats two strings
 * @dest: pointer to the string to be concatenated upon
 * @src: pointer to the string to be concatenated to dest
 *
 * Return: the full concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0 ; src[index] ; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
