#include "main.h"

/**
 * print_sign - function prints sign of a number
 *
 * @n: function parameter
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}



}
