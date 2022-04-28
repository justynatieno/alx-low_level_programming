#include "main.h"
/**
 * is_palindrome - returns if a string is a palindrome
 * @s: the string value to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
/**
 * check_palindrome - check if a string is palindrome
 * @s: the string value to be checked
 * @len: The length of s
 * @index: The index of the string to be checked
 *
 * Return: Integer value
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
/**
 * find_strlen - Get the length of a string
 * @s: the string to get the length
 *
 * Return: the string length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
