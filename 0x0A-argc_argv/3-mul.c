#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: if program recieves 2 arguments 0, if not 1
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, prod;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
