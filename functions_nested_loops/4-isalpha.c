#include "main.h"
/**
 *  _isalpha - function checks for alphabet
 *  @c: function prameter
 *  Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}

