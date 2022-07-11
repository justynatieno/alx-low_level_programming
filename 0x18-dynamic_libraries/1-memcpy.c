#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to copy from
 * @n: number of bytes to be copied
 *
 * Return: returns pointer to the copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];

	return (dest);
}
