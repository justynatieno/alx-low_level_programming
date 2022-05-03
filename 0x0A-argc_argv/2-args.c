#include <stdio.h>
/**
 * main - prints all arguments line by line
 * @argc: number of arguments
 * @argv: Array of the pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0 ; i <= argc - 1 ; i++)
		printf("%s\n", argv[i]);

	return (0);
}
