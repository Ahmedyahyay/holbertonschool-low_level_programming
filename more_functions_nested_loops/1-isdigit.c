#include "main.h"
/**
 * _isdigit - function checks for a digigt from 0 to 9
 * @c: function parameter
 * Return: 1 or 0
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	} else
		return (0);
}
