#include "main.h"
/**
 * _print_rev_recursion - printa a string in reverse
 * @s: pointer to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
