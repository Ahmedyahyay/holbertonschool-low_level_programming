#include "main.h"
/**
 * _strncat - concatinate the values of two integers.
 *
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;

	}


	return (dest);
}
