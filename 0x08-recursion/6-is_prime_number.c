#include "main.h"
/**
 * check_prime - checks if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for prime number 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - returns isn umber is prime
 * @n: number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
