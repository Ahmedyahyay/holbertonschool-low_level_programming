#include "main.h"
/**
 * print_last_digit - function print the last digikt of a number
 * @a: function parameter
 * Return: a % 10
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	return (i % 10);
	i = -i;
	_putchar(i + '0');
	return (i);

}
