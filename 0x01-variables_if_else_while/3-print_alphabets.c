#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 *
 * Description: prints the letters of the alphabet in lowercase then in upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
