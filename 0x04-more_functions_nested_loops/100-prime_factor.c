#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long l, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (l = 1 ; l <= square ; l++)
	{
		if (number % l == 0)
		{
			maxf = number / l;
		}
	}
	printf("%ld\n", maxf);

	return (0);
}
