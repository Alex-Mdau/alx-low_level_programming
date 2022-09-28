#include "main.h"

/**
 * primenumber - this checks if a number is prime
 * @n: the number given
 * @m: the checker number
 *
 * Return: 1 if number is prime else 0
 */

int primenumber(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0)
		return (0);
	return (primenumber(n, m - 1));
}

/**
 * is_prime_number - this checks if a given number is prime
 * @n: the number given
 * Return: 1 if number is prime else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenumber(n, n / 2));
}
