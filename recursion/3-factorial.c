#include "main.h"
/**
 * factorial - function returns the factorial of a given number
 * @n: function parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
