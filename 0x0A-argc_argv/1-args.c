#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguents
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
