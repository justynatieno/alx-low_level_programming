#include "main.h"
/**
 * _strchr - locates a charater in a string
 * @s: the string including the character
 * @c: the character
 *
 * Return: a pointer to the first occurence and NULL if not found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0 ; b <= a ; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
