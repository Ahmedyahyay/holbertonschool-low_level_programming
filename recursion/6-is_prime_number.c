#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function returns 1 if the input integer is a prime number
 * @n: function parameter
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function calculates if a number is prime recursively
 * @n: first parameter
 * @i: second parameter
 *
 * Return: int
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
