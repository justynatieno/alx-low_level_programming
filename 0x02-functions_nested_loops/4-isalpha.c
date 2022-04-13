#include "main.h"
/**
 * _isalpha - checks for any letter of the alphabet
 * @c: value to be chcked
 *
 * Return: 1 if is a letter 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
