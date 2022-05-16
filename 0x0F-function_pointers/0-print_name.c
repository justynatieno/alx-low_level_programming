#include "function_pointers_h"
/**
 * print_name - prints a name
 *@name: name to be printed
 *@f: pointer to the name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || (*f)(char *))
		return;

	f(name);
}